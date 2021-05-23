/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject

{
    NSMutableSet *_domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;
}

+ (id)sharedPersistentSecIdentityPreferencesController;
+ (id)ephemeralSecIdentityPreferencesController;

- (void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(_Bool)arg1 forDomainAndPort:(id)arg2;
- (_Bool)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1;
- (id)_initUsingEphemeralStorage:(_Bool)arg1;

@end
