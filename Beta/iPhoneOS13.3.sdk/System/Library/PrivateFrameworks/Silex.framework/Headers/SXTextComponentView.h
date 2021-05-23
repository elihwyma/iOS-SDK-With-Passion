/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class NSString, SXTangierController, SXTextView;

@interface SXTextComponentView : SXComponentView

{
    SXTangierController *_tangierController;
    SXTextView *_textView;
    struct CGSize _calculatedSize;
}

@property (weak, nonatomic, readonly) SXTangierController *tangierController;
@property (retain, nonatomic) SXTextView *textView;
@property (nonatomic) struct CGSize calculatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)animationDidStart:(id)arg1;
- (void)setAbsoluteFrame:(struct CGRect)arg1;
- (id)textSource;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)setPresentationFrame:(struct CGRect)arg1;
- (void)provideInfosLayoutTo:(id)arg1;
- (_Bool)userInteractable;
- (void)animationDidFinish:(id)arg1;
- (void)didApplyBehavior:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 tangierController:(id)arg5;
- (void)setupTextView;
- (struct CGRect)absoluteTextViewFrame;
- (id)componentIdentifierForTextView:(id)arg1;
- (id)textRulesForTextView:(id)arg1;
- (id)accessibilityContextualLabelForTextView:(id)arg1;
- (id)accessibilityCustomRotorMembershipForTextView:(id)arg1;

@end
