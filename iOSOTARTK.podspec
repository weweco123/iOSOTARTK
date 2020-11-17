Pod::Spec.new do |s|
s.name         = 'iOSOTARTK'
s.version      = '1.0.6'
s.summary      = 'A framework for OTA files'
s.homepage     = 'https://github.com/weweco123/iOSOTARTK'
s.license      = 'MIT'
s.authors      = {'weiwei' => 'weiweivik@163.com'}
s.platform     = :ios, '9.0'
s.source       = {:git => 'https://github.com/weweco123/iOSOTARTK.git', :tag => s.version}
s.vendored_frameworks = "vendored/RTKLEFoundation.framework","vendored/RTKOTASDK.framework"
s.pod_target_xcconfig = {'VALID_ARCHS' => 'i386 x86_64 armv7 arm64'}
s.xcconfig = {
    'USER_HEADER_SEARCH_PATHS' => [
        '$(inherited)',
        '${PODS_ROOT}/vendored/RTKLEFoundation.framework/Headers',
        '${PODS_ROOT}/vendored/RTKOTASDK.framework/Headers'
    ]
}
s.requires_arc = true
end