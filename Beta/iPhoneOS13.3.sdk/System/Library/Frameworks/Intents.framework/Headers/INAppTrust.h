/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface INAppTrust : NSObject

+ (_Bool)shouldTrustExtensionForLaunch:(id)arg1;
+ (_Bool)_shouldTrustExtensionForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2;
+ (id)extensionsTrustedForLaunch:(id)arg1;
+ (_Bool)shouldTrustAppForLaunch:(id)arg1;
+ (_Bool)_shouldTrustAppForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2;
+ (id)appsTrustedForLaunch:(id)arg1;
+ (_Bool)_appRequiresExplicitTrust:(id)arg1 withExplicitAppTrustCache:(id)arg2;

@end
