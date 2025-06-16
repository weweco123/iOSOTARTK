Pod::Spec.new do |s|
s.name         = 'iOSOTARTK'
s.version      = '1.1.1'
s.summary      = 'A framework for OTA files'
s.homepage     = 'https://github.com/weweco123/iOSOTARTK'
s.license      = 'MIT'
s.authors      = {'weiwei' => 'weiweivik@163.com'}
s.platform     = :ios, '12.0'
s.source       = {:git => 'https://github.com/weweco123/iOSOTARTK.git', :tag => s.version}
s.vendored_frameworks = "vendored/RTKLEFoundation.framework","vendored/RTKOTASDK.framework","vendored/UTERTKLib.framework","vendored/ABParTool.framework"
s.pod_target_xcconfig = {
	'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'

}
s.user_target_xcconfig = {
	'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
}

end