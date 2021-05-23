/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarDisplayItem, _UIStatusBarDisplayItemPlacementState, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemState : NSObject

{
    _Bool _wasEnabled;
    _Bool _wasVisible;
    _Bool _dataEnabled;
    _Bool _floating;
    _UIStatusBarDisplayItem *_displayItem;
    _UIStatusBarIdentifier *_identifier;
    _UIStatusBar *_statusBar;
    _UIStatusBarItem *_item;
    NSMutableArray *_placementStates;
    long long _preferredPlacementStateIndex;
    long long _currentPlacementStateIndex;
    _UIStatusBarStyleAttributes *_overriddenStyleAttributes;
    long long _previousPlacementStateIndex;
    long long _dataUpdateStatus;
    long long _placementUpdateStatus;
    long long _enabilityStatus;
    long long _visibilityStatus;
    _UIStatusBarAnimation *_addingAnimation;
    _UIStatusBarAnimation *_removingAnimation;
    NSMutableSet *_animations;
}

@property (copy, nonatomic) _UIStatusBarIdentifier *identifier;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (weak, nonatomic) _UIStatusBarItem *item;
@property (weak, nonatomic) _UIStatusBarDisplayItem *displayItem;
@property (retain, nonatomic) NSMutableArray *placementStates;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacementState *currentPlacementState;
@property (nonatomic) long long preferredPlacementStateIndex;
@property (nonatomic) long long currentPlacementStateIndex;
@property (retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (nonatomic) _Bool wasEnabled;
@property (nonatomic) _Bool wasVisible;
@property (nonatomic) long long previousPlacementStateIndex;
@property (nonatomic, readonly, getter=_animationType) long long animationType;
@property (nonatomic) long long dataUpdateStatus;
@property (nonatomic) long long placementUpdateStatus;
@property (nonatomic, readonly, getter=isEnabledIgnoringAnimations) _Bool enabledIgnoringAnimations;
@property (nonatomic) _Bool dataEnabled;
@property (nonatomic) _Bool floating;
@property (nonatomic) long long enabilityStatus;
@property (nonatomic) long long visibilityStatus;
@property (retain, nonatomic) _UIStatusBarAnimation *addingAnimation;
@property (retain, nonatomic) _UIStatusBarAnimation *removingAnimation;
@property (nonatomic, readonly) NSMutableSet *animations;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (copy, nonatomic, readonly) NSArray *potentialPlacementRegionIdentifiers;
@property (nonatomic, readonly) long long priority;

+ (id)stateForDisplayItemWithIdentifier:(id)arg1 statusBar:(id)arg2;
+ (void)setupRelationsBetweenDisplayItemStates:(id)arg1 visualProvider:(id)arg2;

- (id)description;
- (void)addPlacement:(id)arg1 inRegion:(id)arg2;
- (void)prepareForDataUpdate;
- (id)updateWithData:(id)arg1 styleAttributes:(id)arg2;
- (void)resetToPreferredPlacement;
- (_Bool)updatePlacement;
- (_Bool)isCurrentPlacement:(id)arg1;
- (void)updateToNextEnabledPlacement;
- (_Bool)prepareAnimation:(id)arg1;
- (_Bool)hasRunningAnimations;
- (_Bool)_updateToNextPlacementStateIfNeeded;
- (id)placementStateForPlacement:(id)arg1;
- (_Bool)_resolveDependentItemStatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateStatuses;
- (_Bool)_updatePlacementWithRecursionBlock:(CDUnknownBlockType)arg1;
- (id)_updateForUpdatedData:(id)arg1 updatedStyleAttributes:(id)arg2 updatedEnability:(id)arg3;
- (id)_updateForItem:(id)arg1 data:(id)arg2 styleAttributes:(id)arg3;
- (void)_cancelObsoleteAnimations;
- (id)_animationWithUpdateAnimation:(id)arg1;
- (id)_effectiveStyleAttributesFromStyleAttributes:(id)arg1 data:(id)arg2 styleAttributesChanged:(_Bool *)arg3;

@end
