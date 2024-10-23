Pod::Spec.new do |s|
  s.name             = 'RealCheck'
  s.version          = '1.0.0'
  s.summary          = 'A short description of RealCheck.'
  s.homepage         = 'https://github.com/kindvoon/RealCheck.git'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yangbowen' => 'yangbowen@163.com' }
  s.source           = { :git => 'https://github.com/kindvoon/RealCheck.git', :tag => s.version.to_s }
  s.ios.deployment_target = '13.0'

  s.frameworks = 'AliyunOSSiOS','RPSDK','SecurityGuardSDK','SGMain','SGSecurityBody'
  
  s.libraries = ["c++","z"]
  
  s.ios.vendored_frameworks = 'Framework/*.{framework}'
  s.ios.resource = 'Resources/*.{bundle,jpg}'
  


end
