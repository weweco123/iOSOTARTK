Pod::Spec.new do |s|
s.name         = 'iOSOTARTK'
s.version      = '1.0.0'
s.summary      = 'A framework for OTA files'
s.homepage     = 'https://github.com/weweco123/iOSOTARTK'
s.license      = 'MIT'
s.authors      = {'weiwei' => 'weiweivik@163.com'}
s.platform     = :ios, '8.0'
s.source       = {:git => 'https://github.com/weweco123/iOSOTARTK.git', :tag => s.version}
s.source_files = 'iOSOTARTK/Framework/**'
s.vendored_libraries = "iOSOTARTK/Framework/RTKLEFoundation.framework","iOSOTARTK/Framework/RTKOTASDK.framework"
s.requires_arc = true
end