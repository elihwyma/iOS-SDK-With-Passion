/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _LSPersonaDatabase : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _registered;
    NSDictionary *_cachedBundleIDToPersonasMap;
    NSString *_cachedSystemPersonaIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerWithUserManagerForAttempt:(unsigned long long)arg1 maxAttempts:(unsigned long long)arg2;
- (void)registerWithUserManager;
- (id)initPrivately;
- (void)getUncachedBundleIDToPersonasMap:(id *)arg1 systemPersonaIdentifier:(id *)arg2;
- (void)getCachedBundleIDToPersonasMap:(id *)arg1 systemPersonaIdentifier:(id *)arg2;
- (id)getBundleIDToPersonasMap;
- (id)getSystemPersonaIdentifier;
- (void)personaListDidUpdate;
- (id)personaIdentifiersForBundleIdentifier:(id)arg1;
- (_Bool)personaListContainsSystemPersona:(id)arg1;

@end
