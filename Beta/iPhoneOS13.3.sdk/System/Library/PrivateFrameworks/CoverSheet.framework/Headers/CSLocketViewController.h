/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class NSSet, NSString, SBFFluidBehaviorSettings, UIView, UIViewFloatAnimatableProperty;

@protocol CSLocketViewControllerDelegate;

@interface CSLocketViewController : CSCoverSheetViewControllerBase

{
    NSSet *_componentTypes;
    UIView *_scaleView;
    struct CGPoint _previousTranslation;
    UIViewFloatAnimatableProperty *_scaleProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    _Bool _dismissing;
    id <CSLocketViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CSLocketViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (_Bool)handleEvent:(id)arg1;
- (void)_dismiss:(_Bool)arg1;
- (void)_createProperties;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)handleBottomEdgeGestureBegan:(id)arg1;
- (void)handleBottomEdgeGestureChanged:(id)arg1;
- (void)handleBottomEdgeGestureEnded:(id)arg1;
- (void)addGrabberView:(id)arg1;
- (void)dismissForHomeButton;
- (id)initWithComponentTypes:(id)arg1;
- (void)_updateForPropertyChanged;
- (void)_setCornerRounded:(_Bool)arg1;
- (void)_updateLocketScale:(double)arg1 interactive:(_Bool)arg2;
- (_Bool)_shouldCancelInteractiveDismissGesture;
- (void)wallpaperLocketViewControllerDidTapOnDoneButton:(id)arg1;

@end
