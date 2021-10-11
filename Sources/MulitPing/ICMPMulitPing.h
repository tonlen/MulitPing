#import <Foundation/Foundation.h>
extern const int kRequestStoped;
extern const int kInvalidResponse;

@interface PingModel : NSObject;
@property (readonly) NSDate * _Nullable startDate;
@property (readonly) NSDate * _Nullable endDate;
@property (readonly) NSString * _Nonnull ip;
@property (readonly) NSTimeInterval delay;
@end

@interface PingResult : NSObject
@property (readonly) NSInteger code;
@property (readonly) NSString * _Nonnull ip;
@property (readonly) NSTimeInterval delay;
- (NSString*_Nullable)description;
@end

typedef void (^PingCompleteHandler)(NSArray<PingResult*>* _Nonnull results);

@interface ICMPMulitPing: NSObject
- (void)startWith:(NSArray <NSString*>*_Nonnull)hosts
        count:(NSInteger)count
      timeout:(NSTimeInterval)timeout
     complete:(PingCompleteHandler _Nullable)complete;
@end
