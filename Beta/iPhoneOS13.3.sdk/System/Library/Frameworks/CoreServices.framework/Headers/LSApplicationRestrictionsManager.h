/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSNumber, NSSet;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface LSApplicationRestrictionsManager : NSObject

{
    NSObject<OS_dispatch_queue> *_restrictionsAccessQueue;
    NSObject<OS_dispatch_queue> *_signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> *_signerIdentitySyncSource;
    NSNumber *_whitelistState;
    unsigned long long _knownSystemAppDeletionState;
    NSSet *_whitelistedBundleIDs;
    NSSet *_blacklistedBundleIDs;
    NSSet *_restrictedBundleIDs;
    NSNumber *_maximumRating;
}

@property (readonly, getter=isWhitelistEnabled) _Bool whitelistEnabled;
@property (readonly, getter=isOpenInRestrictionInEffect) _Bool openInRestrictionInEffect;
@property (readonly, getter=isAdTrackingEnabled) _Bool adTrackingEnabled;
@property (readonly, getter=isSystemAppDeletionEnabled) _Bool systemAppDeletionEnabled;
@property (readonly) NSNumber *maximumRating;
@property (readonly) NSSet *restrictedBundleIDs;
@property (readonly) NSSet *blacklistedBundleIDs;
@property (readonly) NSSet *whitelistedBundleIDs;
@property (copy, nonatomic) NSSet *removedSystemApplicationIdentifiers;

+ (id)sharedInstance;
+ (id)activeRestrictionIdentifiers;

- (id)init;
- (_Bool)cleanRemovedSystemApplicationsList;
- (_Bool)isApplicationRestricted:(id)arg1;
- (id)identifierForRemovedAppPrompt:(id)arg1;
- (_Bool)isAppExtensionRestricted:(id)arg1;
- (_Bool)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2;
- (void)_syncTrustedSignerIdenties;
- (void)handleMCEffectiveSettingsChanged;
- (void)clearAllValues;
- (id)_MCProfileConnection;
- (id)_LSResolveIdentifiers:(id)arg1;
- (void)setWhitelistedBundleIDs:(id)arg1;
- (void)setBlacklistedBundleIDs:(id)arg1;
- (void)setRestrictedBundleIDs:(id)arg1;
- (id)calculateSetDifference:(id)arg1 and:(id)arg2;
- (_Bool)_LSApplyRestrictedSet:(id)arg1 forRestriction:(id)arg2;
- (_Bool)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(_Bool)arg2;
- (_Bool)isFeatureAllowed:(unsigned long long)arg1;
- (id)_MCRestrictionManager;
- (id)blacklistedBundleID;
- (void)beginListeningForChanges;
- (void)scheduleSyncTrustedSignerIdenties;
- (_Bool)setApplication:(id)arg1 removed:(_Bool)arg2;
- (_Bool)isRatingAllowed:(id)arg1;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3;

@end
