/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class NSString, SXTextView;

@interface SXButtonComponentView : SXComponentView

{
    SXTextView *_textView;
    struct CGRect _typographicBounds;
}

@property (nonatomic, readonly) SXTextView *textView;
@property (nonatomic) struct CGRect typographicBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (void)didMoveToSuperview;
- (void)setAbsoluteFrame:(struct CGRect)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)setPresentationFrame:(struct CGRect)arg1;
- (void)provideInfosLayoutTo:(id)arg1;
- (struct CGRect)absoluteTextViewFrame;
- (id)componentIdentifierForTextView:(id)arg1;
- (id)textRulesForTextView:(id)arg1;
- (id)accessibilityContextualLabelForTextView:(id)arg1;
- (id)accessibilityCustomRotorMembershipForTextView:(id)arg1;

@end
