#import <Foundation/Foundation.h>

@protocol ICMPOutputDelegate <NSObject>
- (void)write:(NSString*_Nonnull)line;
@end

extern const int kICMPRequestStoped;
extern const int kICMPInvalidPingResponse;

@interface ICMPPingModel : NSObject;
@property (readonly) NSDate * _Nullable startDate;
@property (readonly) NSDate * _Nullable endDate;
@property (readonly) NSString * _Nonnull ip;
@property (readonly) NSTimeInterval delay;
@end

@interface ICMPPingResult : NSObject
@property (readonly) NSInteger code;
@property (readonly) NSString * _Nonnull ip;
@property (readonly) NSTimeInterval delay;
- (NSString*_Nullable)description;
@end

typedef void (^ICMPPingCompleteHandler)(NSArray<ICMPPingResult*>* _Nonnull results);

@interface ICMPMulitPing : NSObject
- (void)start:(NSArray <NSString*>*_Nonnull)hosts
        count:(NSInteger)count
      timeout:(NSTimeInterval)timeout
       output:(id<ICMPOutputDelegate>_Nullable)output
     complete:(ICMPPingCompleteHandler _Nullable)complete;
@end
