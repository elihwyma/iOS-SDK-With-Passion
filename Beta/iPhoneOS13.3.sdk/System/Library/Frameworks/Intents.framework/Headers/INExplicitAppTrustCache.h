/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface INExplicitAppTrustCache : NSObject

{
    _Bool _loadedManagedBundleIdentifiers;
    _Bool _loadedTrustedCodeSigningIdentities;
    _Bool _enterpriseAppTrustAllowedLoaded;
    _Bool _enterpriseAppTrustAllowed;
    NSArray *_managedBundleIdentifiers;
    NSArray *_trustedCodeSigningIdentities;
    NSSet *_signingIdentitiesRequiringExplicitTrust;
}

@property (nonatomic) _Bool enterpriseAppTrustAllowed;
@property (retain, nonatomic) NSArray *managedBundleIdentifiers;
@property (retain, nonatomic) NSArray *trustedCodeSigningIdentities;
@property (retain, nonatomic) NSSet *signingIdentitiesRequiringExplicitTrust;

@end
