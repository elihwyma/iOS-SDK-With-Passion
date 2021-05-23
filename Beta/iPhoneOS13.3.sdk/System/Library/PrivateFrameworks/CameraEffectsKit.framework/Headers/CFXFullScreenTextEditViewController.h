/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CFXEffect, CFXEffectEditorView, NSString, UIView;

@protocol CFXFullScreenTextEditViewControllerDelegate;

@interface CFXFullScreenTextEditViewController : UIViewController

{
    _Bool _effectWasRemoved;
    _Bool _isRunningAnimation;
    _Bool _insertingEffect;
    CFXEffect *_textEffect;
    CFXEffect *_workingEffect;
    CFXEffectEditorView *_effectEditor;
    id <CFXFullScreenTextEditViewControllerDelegate> _delegate;
    UIView *_dimmingView;
    struct CGRect _effectEditorFrameRelativeToScreen;
}

@property (retain, nonatomic) CFXEffect *workingEffect;
@property (retain, nonatomic) CFXEffectEditorView *effectEditor;
@property (weak, nonatomic, readonly) id <CFXFullScreenTextEditViewControllerDelegate> delegate;
@property (nonatomic) _Bool effectWasRemoved;
@property (nonatomic) struct CGRect effectEditorFrameRelativeToScreen;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) _Bool isRunningAnimation;
@property (nonatomic) _Bool insertingEffect;
@property (nonatomic, readonly) CFXEffect *textEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)displayFullScreenTextEditorForEffect:(id)arg1 inViewController:(id)arg2 delegate:(id)arg3 cameraViewWindowFrame:(struct CGRect)arg4 insertingEffect:(_Bool)arg5;
+ (_Bool)isFullScreenTextEditorPresented;
+ (void)notifyCameraViewWindowFrameChanged:(struct CGRect)arg1;
+ (id)CFX_fadeTimingParameters;
+ (void)removeFullScreenTextEditor;

- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)keyboardDidHide:(id)arg1;
- (id)initWithTextEffect:(id)arg1 CGSize:(struct CGRect)arg2 insertingEffect:(_Bool)arg3 delegate:(id)arg4;
- (void)didTappedEmptyDimmedArea:(id)arg1;
- (void)configureWorkingEffect;
- (void)CFX_animateWithDuration:(double)arg1 animatingIn:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scaleTextToFitTextEditingBounds:(_Bool)arg1;
- (id)effectEditorView:(id)arg1 effectAtPoint:(struct CGPoint)arg2;
- (_Bool)effectEditorView:(id)arg1 isEffectAtPoint:(struct CGPoint)arg2 effect:(id)arg3;
- (struct CGRect)effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3 includeTracking:(_Bool)arg4 adjustForMinimumHitTestArea:(_Bool)arg5;
- (id)effectEditorView:(id)arg1 viewInfoForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3;
- (struct CGPoint)effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3;
- (void)effectEditorViewDidBeginEditing:(id)arg1;
- (struct CGPoint)effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(struct CGPoint)arg3 relativeToBounds:(struct CGRect)arg4;
- (void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(struct CGAffineTransform)arg3 relativeToBounds:(struct CGRect)arg4;
- (_Bool)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2;
- (id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3 displayScale:(double)arg4;
- (id)effectEditorView:(id)arg1 textForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3;
- (void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(_Bool)arg3;
- (void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2;
- (_Bool)effectEditorView:(id)arg1 shouldDisableEditingAnimationForEffect:(id)arg2;
- (double)effectEditorView:(id)arg1 durationForBeginEditingAnimationForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 willBeginAnimationBeforeEditingEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didStartBeginEditingAnimationForEffect:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)effectEditorView:(id)arg1 didCompleteBeginEditingAnimationForEffect:(id)arg2;
- (id)effectEditorView:(id)arg1 beginEditingAnimationFromFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3;
- (id)effectEditorView:(id)arg1 beginEditingAnimationToFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3;
- (double)effectEditorView:(id)arg1 durationForEndEditingAnimationForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 willBeginAnimationAfterEditingEffect:(id)arg2;
- (id)effectEditorView:(id)arg1 endEditingAnimationFromFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3;
- (id)effectEditorView:(id)arg1 endEditingAnimationToFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3;
- (void)effectEditorView:(id)arg1 didStartEndEditingAnimationForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didCompleteEndEditingAnimationForEffect:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)effectEditorViewIsTrackingEffect:(id)arg1;
- (id)effectEditorView:(id)arg1 trackingTransformWithEffectFrame:(id)arg2 trackingTransformWithObjectTransform:(id)arg3 fractionComplete:(double)arg4;
- (void)effectEditorViewDidEndEditing:(id)arg1;
- (unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2;
- (_Bool)effectEditorViewShouldPreviewEditEffect:(id)arg1;

@end
