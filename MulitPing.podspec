Pod::Spec.new do |s|
  s.name = 'MulitPing'
  s.version = '1.1.0'
  s.license = 'MIT'
  s.summary = 'Simple, Strongly Mulit Ping for iOS, macOS and tvOS.'
  s.homepage = 'https://github.com/tonlen/MulitPing'
  s.authors = { 'tonlen' => 'iboutlet@qq.com' }
  s.source = { :git => 'https://github.com/tonlen/MulitPing.git', :tag => s.version }
  s.ios.deployment_target = '8.0'
  s.osx.deployment_target = '10.10'
  s.tvos.deployment_target = '9.0'
  s.watchos.deployment_target = '2.0'
  s.source_files = 'Sources/**/*.{h,m}'
end
