#
# Be sure to run `pod lib lint PodRepo2020.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'PodRepo2020'
  s.version          = '0.1.0'
  s.summary          = 'A short description of PodRepo2020.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'PodRepo2020'

  s.homepage         = 'https://github.com/zzjpeter/PodRepo2020'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zzjpeter' => '2603160657@qq.com' }
  s.source           = { :git => 'https://github.com/zzjpeter/PodRepo2020.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'PodRepo2020/Classes/**/*'
  
  # s.resource_bundles = {
  #   'PodRepo2020' => ['PodRepo2020/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit', 'MapKit', 'Foundation'
  s.dependency 'JLAuthorizationManager', '2.1.1'
  s.dependency 'Masonry','1.1.0'
  s.dependency 'AFNetworking','4.0.1'
  s.dependency 'MJRefresh', '3.4.3'
  s.dependency 'UITextView-WZB','1.1.1'
  s.dependency 'RMMapper','1.1.5'
  # pod lib lint 校验不通过的库 移出
  #s.dependency 'YYKit', '1.0.9'
  #s.dependency 'LookinServer','1.0.0'
  #校验spec文件
  #pod lib lint --allow-warnings #本地验证spec文件
  #pod repo push PodRepo2020 PodRepo2020.podspec --allow-warnings #远程本地验证spec文件
  #发布到cocoapods，成为公开库
  #pod trunk me #验证cocoaPods
  #pod trunk push ***.podspec --allow-warnings #发布
  #pod trunk me #验证查看cocoaPods
  #详细参考链接 https://www.jianshu.com/p/e63c6f1a5df9
end
