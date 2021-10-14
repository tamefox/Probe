Pod::Spec.new do |spec|
  spec.name         = "Probe"
  spec.version      = "2.0.9"
  spec.summary      = "Probe SDK by fodlab"
  spec.homepage     = "https://github.com/tamefox/Probe.git"
  spec.license      = { :type => 'MIT' }
  spec.author       = "fodlab"
  spec.platform     = :ios, "8.0"
   spec.source       = { :git => "https://github.com/tamefox/Probe.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks  = "Probe.framework"
  spec.frameworks       = 'SystemConfiguration'
  spec.dependency "TaurusXAds"
end