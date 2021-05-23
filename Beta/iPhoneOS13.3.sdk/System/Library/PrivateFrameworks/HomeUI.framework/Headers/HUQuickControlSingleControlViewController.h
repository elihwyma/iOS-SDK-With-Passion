/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFControlItem, HUQuickControlInteractionCoordinator, HUQuickControlViewProfile, NAValueThrottler, NSString, _HUQuickControlSingleControlHostView;

@interface HUQuickControlSingleControlViewController : HUQuickControlViewController <Swift>

{
    _Bool _writesInProgressOrPossible;
    _Bool _hasWrittenAnyNewValues;
    _Bool _hasSetControlSize;
    HUQuickControlInteractionCoordinator *_interactionCoordinator;
    id _modelValue;
    NAValueThrottler *_valueWriteThrottler;
    unsigned long long _inFlightWriteCount;
    HUQuickControlViewProfile *_viewProfile;
    double _verticalDirectionalControlStretchFactor;
    double _horizontalControlCompressionFactor;
}

@property (nonatomic, readonly) NAValueThrottler *valueWriteThrottler;
@property (nonatomic) unsigned long long inFlightWriteCount;
@property (nonatomic, getter=areWritesInProgressOrPossible) _Bool writesInProgressOrPossible;
@property (nonatomic) _Bool hasWrittenAnyNewValues;
@property (retain, nonatomic) HUQuickControlViewProfile *viewProfile;
@property (retain, nonatomic) HUQuickControlInteractionCoordinator *interactionCoordinator;
@property (nonatomic) double verticalDirectionalControlStretchFactor;
@property (nonatomic) double horizontalControlCompressionFactor;
@property (retain, nonatomic) _HUQuickControlSingleControlHostView *view;
@property (nonatomic) _Bool hasSetControlSize;
@property (nonatomic, readonly) HFControlItem *controlItem;
@property (nonatomic, readonly) id modelValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (void)loadView;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)isUserInteractionEnabled;
- (void)setControlSize:(unsigned long long)arg1;
- (void)_updateTitle;
- (id)viewForTouchContinuation;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)overrideValueForCharacteristic:(id)arg1;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (id)overrideStatusText;
- (id)overrideSecondaryStatusText;
- (id)viewControllerForTouchContinuation;
- (void)setControlOrientation:(unsigned long long)arg1;
- (void)setPreferredControl:(unsigned long long)arg1;
- (void)invalidateViewProfile;
- (id)initWithControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (void)interactionCoordinator:(id)arg1 interactionStateDidChange:(_Bool)arg2;
- (_Bool)hasModelValueChangedForInteractionCoordinator:(id)arg1;
- (void)interactionCoordinatorWantsDismissal:(id)arg1;
- (void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1;
- (void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;
- (void)modelValueDidChange;
- (void)_writeModelControlValue:(id)arg1;
- (void)_updateValueFromControlItem;
- (void)_updateViewProfileForCurrentItemState;
- (void)_setModelValue:(id)arg1 writeValue:(_Bool)arg2;
- (void)_updateWriteState;
- (void)_updateControlTransform;
- (void)_updateControlViewReachabilityState;

@end
