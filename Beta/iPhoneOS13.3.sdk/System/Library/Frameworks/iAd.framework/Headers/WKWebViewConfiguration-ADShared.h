/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <WKWebViewConfiguration.h>

@interface WKWebViewConfiguration (ADShared)

+ (id)sharedAdvertisingConfiguration:(_Bool)arg1;
+ (id)sharedAdvertisingConfigurationForVideo:(_Bool)arg1;
+ (id)_newSharedConfiguration:(_Bool)arg1 forVideo:(_Bool)arg2;
+ (_Bool)excludeCustomJavaScript;

@end
