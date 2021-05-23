/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAlertControllerVisualStyleActionSheet.h>

@class UIView, UIVisualEffectView, _UIPreviewPresentationEffectView;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet

{
    _Bool _actionsReversed;
    UIView *_headerView;
    UIVisualEffectView *_revealEffectView;
    _UIPreviewPresentationEffectView *_sourceViewSnapshot;
}

@property (nonatomic) _Bool actionsReversed;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIVisualEffectView *revealEffectView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *sourceViewSnapshot;

+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
+ (long long)interfaceActionPresentationStyle;

- (id)dimmingViewForAlertController:(id)arg1;
- (_Bool)shouldPreserveRespondersAcrossWindows;
- (_Bool)shouldOccludeDuringPresentation;
- (_Bool)_shouldReverseActions;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (_Bool)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (_Bool)placementAvoidsKeyboard;
- (long long)permittedActionLayoutDirection;
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (struct CGRect)_sourceRectForAlertController:(id)arg1 inContainerView:(id)arg2;
- (double)_actionDescriptiveTextFontSize;
- (double)minimumWidth;
- (id)tintColorForAlertController:(id)arg1;

@end
