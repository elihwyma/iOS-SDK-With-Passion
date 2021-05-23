/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, UIAccessibilityHUDGestureManager, UIColor, UIGestureRecognizer, UIScreen, _UIStatusBarAction, _UIStatusBarData, _UIStatusBarDataAggregator, _UIStatusBarStyleAttributes;

@protocol _UIStatusBarActionable, _UIStatusBarVisualProvider;

@interface _UIStatusBar : UIView <Swift>

{
    id <_UIStatusBarVisualProvider> _visualProvider;
    UIScreen *_targetScreen;
    long long _style;
    UIColor *_foregroundColor;
    long long _mode;
    long long _orientation;
    _UIStatusBarData *_currentData;
    UIGestureRecognizer *_actionGestureRecognizer;
    NSArray *_enabledPartIdentifiers;
    NSMutableDictionary *_items;
    NSMutableDictionary *_displayItemStates;
    CDUnknownBlockType _updateCompletionHandler;
    UIView *_foregroundView;
    id <_UIStatusBarActionable> _targetActionable;
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;
    Class _visualProviderClass;
    NSDictionary *_regions;
    _UIStatusBarDataAggregator *_dataAggregator;
    _UIStatusBarData *_currentAggregatedData;
    _UIStatusBarStyleAttributes *_styleAttributes;
    _UIStatusBarAction *_action;
    struct CGRect _avoidanceFrame;
}

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) NSMutableDictionary *displayItemStates;
@property (copy, nonatomic) CDUnknownBlockType updateCompletionHandler;
@property (retain, nonatomic) UIView *foregroundView;
@property (weak, nonatomic) id <_UIStatusBarActionable> targetActionable;
@property (retain, nonatomic) UIAccessibilityHUDGestureManager *accessibilityHUDGestureManager;
@property (retain, nonatomic, getter=_visualProviderClassName, setter=_setVisualProviderClassName:) NSString *visualProviderClassName;
@property (retain, nonatomic, getter=_visualProviderClass, setter=_setVisualProviderClass:) Class visualProviderClass;
@property (nonatomic, readonly) id <_UIStatusBarVisualProvider> visualProvider;
@property (nonatomic, readonly) NSDictionary *regions;
@property (nonatomic, readonly) _UIStatusBarDataAggregator *dataAggregator;
@property (nonatomic, readonly) _UIStatusBarData *currentAggregatedData;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) unsigned int animationContextId;
@property (nonatomic, readonly, getter=areAnimationsEnabled) _Bool animationsEnabled;
@property (retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;
@property (retain, nonatomic) _UIStatusBarAction *action;
@property (retain, nonatomic) UIScreen *targetScreen;
@property (nonatomic) long long style;
@property (copy, nonatomic) UIColor *foregroundColor;
@property (nonatomic) long long mode;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) _UIStatusBarData *currentData;
@property (nonatomic, readonly) NSSet *dependentDataEntryKeys;
@property (copy, nonatomic) _UIStatusBarData *overlayData;
@property (nonatomic, readonly) UIGestureRecognizer *actionGestureRecognizer;
@property (copy, nonatomic) NSArray *enabledPartIdentifiers;
@property (nonatomic) struct CGRect avoidanceFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)stringForStatusBarStyle:(long long)arg1;
+ (struct CGSize)intrinsicContentSizeForTargetScreen:(id)arg1 orientation:(long long)arg2 onLockScreen:(_Bool)arg3;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (void)updateConstraints;
- (void)setSemanticContentAttribute:(long long)arg1;
- (_Bool)_forceLayoutEngineSolutionInRationalEdges;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)updateWithAnimations:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;
- (id)displayItemIdentifiersInRegionsWithIdentifiers:(id)arg1;
- (struct CGRect)frameForDisplayItemWithIdentifier:(id)arg1;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1 includeInternalItems:(_Bool)arg2;
- (id)displayItemWithIdentifier:(id)arg1;
- (id)itemWithIdentifier:(id)arg1;
- (id)regionWithIdentifier:(id)arg1;
- (id)stateForDisplayItemWithIdentifier:(id)arg1;
- (void)_updateWithAggregatedData:(id)arg1;
- (void)statusBarGesture:(id)arg1;
- (void)_prepareVisualProviderIfNeeded;
- (id)_effectiveTargetScreen;
- (void)_updateStyleAttributes;
- (void)_performWithInheritedAnimation:(CDUnknownBlockType)arg1;
- (void)_updateDisplayedItemsWithData:(id)arg1 styleAttributes:(id)arg2 extraAnimations:(id)arg3;
- (long long)_effectiveStyleFromStyle:(long long)arg1;
- (void)_updateWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateWithData:(id)arg1;
- (void)_prepareAnimations:(id)arg1;
- (void)_performAnimations:(id)arg1;
- (void)_fixupDisplayItemAttributes;
- (void)_delayUpdatesWithKeys:(id)arg1 fromAnimation:(id)arg2;
- (void)_updateRegionItems;
- (void)_rearrangeOverflowedItems;
- (struct CGRect)_frameForActionable:(id)arg1 actionInsets:(struct UIEdgeInsets)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 touchInsideActionable:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 pressInsideActionable:(id)arg2;
- (struct CGRect)_frameForActionable:(id)arg1;
- (struct CGRect)_pressFrameForActionable:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 isInsideActionable:(id)arg2;
- (id)_regionsForPartWithIdentifier:(id)arg1 includeInternalItems:(_Bool)arg2;
- (id)_actionablesForPartWithIdentifier:(id)arg1 includeInternalItems:(_Bool)arg2 onlyVisible:(_Bool)arg3;
- (id)_itemWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)_statusBarWindowForAccessibilityHUD;
- (void)resetVisualProvider;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (id)actionForPartWithIdentifier:(id)arg1;
- (void)setOffset:(struct UIOffset)arg1 forPartWithIdentifier:(id)arg2;
- (struct UIOffset)offsetForPartWithIdentifier:(id)arg1;
- (void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2;
- (double)alphaForPartWithIdentifier:(id)arg1;
- (void)setStyle:(long long)arg1 forPartWithIdentifier:(id)arg2;
- (long long)styleForPartWithIdentifier:(id)arg1;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (id)itemsDependingOnKeys:(id)arg1;
- (id)itemIdentifiersInRegionsWithIdentifiers:(id)arg1;
- (id)dataEntryKeysForItemsWithIdentifiers:(id)arg1;

@end
