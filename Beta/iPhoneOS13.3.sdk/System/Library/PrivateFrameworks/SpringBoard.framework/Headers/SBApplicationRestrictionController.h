/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBApplicationDefaults;

@protocol SBApplicationRestrictionDataSource;

@interface SBApplicationRestrictionController : NSObject

{
    id <SBApplicationRestrictionDataSource> _dataSource;
    NSHashTable *_observers;
    NSMutableDictionary *_tagValidityMap;
    NSMutableDictionary *_validTagsByIdentifier;
    struct MGNotificationTokenStruct *_tagsNotificationToken;
    NSMutableSet *_enabledTags;
    NSMutableDictionary *_ratingRanksByIdentifier;
    NSSet *_restrictedIdentifiers;
    SBApplicationDefaults *_applicationDefaults;
    _Bool _showInternalApps;
    _Bool _hasHideNonDefaultSystemAppsCapability;
    _Bool _showAllSystemApps;
    _Bool _canPostRestrictionState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)beginPostingChanges;
- (_Bool)isApplicationIdentifierRestricted:(id)arg1;
- (void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 replaced:(id)arg2 removed:(id)arg3;
- (void)noteVisibilityOverridesDidChange;
- (void)noteRestrictionsMayHaveChanged;
- (void)_updateVisibilityPreferences;
- (void)_postRestrictionStateToObservers:(id)arg1;
- (void)_postRestrictionState;
- (void)_updateRestrictionsAndForcePost:(_Bool)arg1;

@end
