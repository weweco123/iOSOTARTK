Pod::Spec.new do |s|
s.name         = 'iOSOTARTK'
s.version      = '1.0.7'
s.summary      = 'A framework for OTA files'
s.homepage     = 'https://github.com/weweco123/iOSOTARTK'
s.license      = 'MIT'
s.authors      = {'weiwei' => 'weiweivik@163.com'}
s.platform     = :ios, '9.0'
s.source       = {:git => 'https://github.com/weweco123/iOSOTARTK.git', :tag => s.version}
s.vendored_frameworks = "vendored/RTKLEFoundation.xcframework","vendored/RTKOTASDK.xcframework"


end