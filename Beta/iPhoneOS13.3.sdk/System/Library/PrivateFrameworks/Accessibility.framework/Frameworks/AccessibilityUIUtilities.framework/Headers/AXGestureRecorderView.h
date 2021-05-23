/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <AccessibilityUIUtilities/AXGestureRecorderGradientView.h>

@class AXGestureRecorderStyleProvider, NSMutableArray, NSMutableDictionary, NSString, UIAccessibilityCustomAction, UIColor, UIView;

@protocol AXGestureRecorderViewDelegate;

@interface AXGestureRecorderView : AXGestureRecorderGradientView

{
    double _freezeDryStartTime;
    double _freezeDryDrawPercentage;
    double _freezeDryStartIndex;
    NSMutableArray *_freezedDynamicPaths;
    NSMutableDictionary *_activeLayers;
    NSMutableDictionary *_instantReplayViews;
    NSMutableArray *_staticLayers;
    NSMutableArray *_transitionLayers;
    _Bool _replayMode;
    id <AXGestureRecorderViewDelegate> _dataSource;
    AXGestureRecorderStyleProvider *_styleProvider;
    UIView *_dynamicFingerPathsContainerView;
    UIColor *_dynamicFingerPathBackgroundGradientPatternColor;
    UIAccessibilityCustomAction *_hideControlsAction;
    UIAccessibilityCustomAction *_showControlsAction;
    NSMutableDictionary *_previouslyActiveLayersByInstantReplayFingerIndex;
    struct CGRect _constrainedBoundsForDrawing;
}

@property (retain, nonatomic) UIView *dynamicFingerPathsContainerView;
@property (retain, nonatomic) UIColor *dynamicFingerPathBackgroundGradientPatternColor;
@property (nonatomic) struct CGRect constrainedBoundsForDrawing;
@property (retain, nonatomic) UIAccessibilityCustomAction *hideControlsAction;
@property (retain, nonatomic) UIAccessibilityCustomAction *showControlsAction;
@property (retain, nonatomic) NSMutableDictionary *previouslyActiveLayersByInstantReplayFingerIndex;
@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider;
@property (weak, nonatomic) id <AXGestureRecorderViewDelegate> dataSource;
@property (nonatomic) _Bool replayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityCustomActions;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didMoveToWindow;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)freezeAllDynamicFingerPaths;
- (void)deleteAllFingerPaths;
- (void)hideStaticView;
- (void)insertDynamicFingerPathAtIndex:(unsigned long long)arg1;
- (void)_hideControls;
- (void)_showControls;
- (id)_dynamicFingerPathAtIndex:(unsigned long long)arg1;
- (void)fingerPathDidChange:(unsigned long long)arg1;
- (void)_performTransitionToStaticFingers:(id)arg1 transitionLayers:(id)arg2 hasExistingStaticFingers:(_Bool)arg3;
- (void)freezeAllDynamicFingerPathsWithInstantReplayOffset:(unsigned long long)arg1;
- (void)clearInstantReplayFingerPaths;
- (void)reloadDynamicFingerPathAtIndex:(unsigned long long)arg1;
- (void)updateInstantReplayAtIndex:(unsigned long long)arg1 withPartialPath:(id)arg2;
- (void)finishInstantReplayAtIndex:(unsigned long long)arg1;

@end
