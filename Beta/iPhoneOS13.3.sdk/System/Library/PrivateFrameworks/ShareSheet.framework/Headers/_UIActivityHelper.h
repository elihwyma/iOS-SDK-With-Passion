/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _UIActivityApplicationExtensionDiscovery;

@protocol _UIActivityHelperDelegate;

@interface _UIActivityHelper : NSObject

{
    _Bool _primed;
    id <_UIActivityHelperDelegate> _delegate;
    NSString *_sessionID;
    _UIActivityApplicationExtensionDiscovery *_applicationExtensionDiscovery;
    NSArray *_cachedBuiltinActivities;
    CDUnknownBlockType _fetchShortcutsBlock;
}

@property (weak, nonatomic, readonly) id <_UIActivityHelperDelegate> delegate;
@property (nonatomic, readonly) NSString *sessionID;
@property (retain, nonatomic) _UIActivityApplicationExtensionDiscovery *applicationExtensionDiscovery;
@property (nonatomic, readonly) NSArray *cachedBuiltinActivities;
@property (nonatomic) _Bool primed;
@property (copy, nonatomic) CDUnknownBlockType fetchShortcutsBlock;

+ (id)builtinActivityClasses;

- (id)initWithDelegate:(id)arg1 sessionID:(id)arg2 fetchShortcutsBlock:(CDUnknownBlockType)arg3;
- (void)preheatAvailableActivitiesForMatchingContext:(id)arg1;
- (id)orderedAvailableActivitiesForMatchingContext:(id)arg1;
- (void)primeWithDiscoveryContext:(id)arg1;
- (id)_activitiesByApplyingBeforeTypePinningToActivities:(id)arg1 activitiesToBeforeTypePin:(id)arg2;
- (void)_enumerateAvailableActivitiesForMatchingContext:(id)arg1 intoMatchingResults:(id)arg2 matchingResultsUpdateBlock:(CDUnknownBlockType)arg3 enumerateActivityBlock:(CDUnknownBlockType)arg4;
- (id)activitiesByOrderingActivities:(id)arg1 applyDefaultOrdering:(_Bool)arg2 applyBeforeTypePinning:(_Bool)arg3 activityTypeOrdering:(id)arg4;
- (id)_activitiesByApplyingDefaultOrdering:(id)arg1;
- (id)_activitiesByTypeOrderingActivities:(id)arg1 activityTypeOrdering:(id)arg2;
- (id)_activitiesByApplyingFavoriteOrderingToActivities:(id)arg1 favoriteActivityTypes:(id)arg2;
- (id)_activitiesByDuetOrderingActivities:(id)arg1;
- (id)_defaultOrderingDescriptorForActivity:(id)arg1;
- (id)_defaultSortOrderForBuiltInElevatedActivity:(id)arg1;
- (id)_defaultSortItemForBuiltinActivity:(id)arg1;
- (id)_defaultSortOrderForExtensionBasedActivity:(id)arg1;
- (id)_defaultSortOrderForApplicationDefinedActivity:(id)arg1;
- (id)_defaultSortOrderForOpenInAppActivity:(id)arg1;
- (id)_defaultSortOrderForShortcutActivity:(id)arg1;
- (id)_defaultSortOrderForOtherActivity:(id)arg1;

@end
