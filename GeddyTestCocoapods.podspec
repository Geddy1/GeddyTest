

Pod::Spec.new do |s|

  s.name         = "GeddyTestCocoapods"
  s.version      = "1.0.0"
  s.summary      = "geddy test"
  s.description  = <<-DESC
			test daasddfafasasdvdsavasvdsavavdds
                   DESC

  s.homepage     = "https://github.com/Geddy1/GeddyTest"
  s.license      = "MIT"
  s.author       = { "fzw_jishubu@163.com" => "fzw_jishubu@163.com" }

  s.platform 	 = :ios, "8.0"
  s.source       = { :git => "https://github.com/Geddy1/GeddyTest.git", :tag => "#{s.version}" }
  s.source_files  = "LeeDatePickerView"
  s.exclude_files = "Classes/Exclude"

end
