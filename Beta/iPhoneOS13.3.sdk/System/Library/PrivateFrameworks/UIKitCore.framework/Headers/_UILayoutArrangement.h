/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, UIView, _UILAConfigurationHistory, _UILayoutSpacer;

@protocol _UILAPropertySource;

__attribute__((visibility("hidden")))
@interface _UILayoutArrangement : NSObject <Swift>

{
    NSMutableSet *_incomingItems;
    NSMutableSet *_outgoingItems;
    NSMutableSet *_hiddenItems;
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    NSMutableSet *_invalidBaselineConstraints;
    NSMutableArray *_canvasConnectionConstraints;
    _Bool _awaitingAnimationLayoutPass;
    _Bool _layoutFillsCanvas;
    _Bool _layoutUsesCanvasMarginsWhenFilling;
    _UILAConfigurationHistory *_unanimatedConfigurationTarget;
    NSMutableArray *_mutableItems;
    _UILayoutSpacer *_spanningLayoutGuide;
    _UILAConfigurationHistory *_configurationHistory;
    UIView *_canvas;
    long long _axis;
}

@property (retain, nonatomic, setter=_setMutableItems:) NSMutableArray *_mutableItems;
@property (nonatomic, readonly) NSSet *_hiddenItems;
@property (nonatomic, readonly) NSSet *_incomingItems;
@property (nonatomic, readonly) NSSet *_outgoingItems;
@property (retain, nonatomic, setter=_setUnanimatedConfigurationTarget:) _UILAConfigurationHistory *_unanimatedConfigurationTarget;
@property (nonatomic, readonly) _Bool _awaitingAnimationLayoutPass;
@property (nonatomic, readonly) id <_UILAPropertySource> _propertySource;
@property (retain, nonatomic, readonly) _UILayoutSpacer *_spanningLayoutGuide;
@property (retain, nonatomic, readonly) _UILAConfigurationHistory *_configurationHistory;
@property (nonatomic) _Bool layoutFillsCanvas;
@property (nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property (weak, nonatomic) UIView *canvas;
@property (nonatomic) long long axis;
@property (copy, nonatomic, readonly) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic, readonly) NSSet *invalidBaselineConstraints;

+ (Class)_configurationHistoryClass;

- (id)init;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_invalidateBaselineConstraint:(id)arg1;
- (void)_setAxis:(long long)arg1 notify:(_Bool)arg2;
- (void)_setLayoutFillsCanvas:(_Bool)arg1 notify:(_Bool)arg2;
- (void)_setLayoutUsesCanvasMarginsWhenFilling:(_Bool)arg1 notify:(_Bool)arg2;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (_Bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;
- (_Bool)_spanningGuideConstraintsNeedUpdate;
- (id)_viewOrGuideForLocationAttribute:(long long)arg1;
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;
- (_Bool)_requiresNotificationForHasBaselinePropertyChanges;
- (void)_hasBaselineChangedNotificationRequirementDidChange;
- (void)_trackChangesWithConfigBlock:(CDUnknownBlockType)arg1;
- (_Bool)_hasStaleConfiguration;
- (void)_updateConfigurationHistory;
- (_Bool)_itemWantsLayoutAsIfVisible:(id)arg1;
- (long long)_dimensionAttributeForCurrentAxis;
- (void)_updateArrangementConstraints;
- (void)_clearAllConstraintsArrays;
- (id)_identifierForSpanningLayoutGuide;
- (long long)_axisForSpanningLayoutGuide;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (_Bool)_usesCenteringConnectionConstraint;
- (id)_baselineDependentConstraints;
- (_Bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (void)_createSpanningLayoutGuide;
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;
- (_Bool)_allItemsHidden;
- (void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4;
- (void)_createUnanimatedConfigurationTargetIfNecessary;
- (void)_registerAnimationRequest;
- (void)_hasBaselineChangedNotification:(id)arg1;
- (void)_removeSpanningLayoutGuide;
- (void)_clearCanvasConnectionConstraints;
- (void)_updateCanvasConnectionConstraintsIfNecessary;
- (id)_spanningLayoutGuideCreateIfNecessary;
- (float)_spanningLayoutGuideFittingPriority;
- (_Bool)_spanningLayoutGuideAlwaysUsesFittingConstraint;
- (long long)_minAttributeForCanvasConnections;
- (_Bool)_configurationRequiresCanvasConnectionFittingConstraint;
- (long long)_centerAttributeForCanvasConnections;
- (id)initWithItems:(id)arg1 onAxis:(long long)arg2;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;

@end
