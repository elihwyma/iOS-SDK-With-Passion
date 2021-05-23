/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@protocol WFWorkflowWizardSuggestedPhraseViewDelegate;

@interface WFWorkflowWizardSuggestedPhraseView : UIView

{
    id <WFWorkflowWizardSuggestedPhraseViewDelegate> _delegate;
    NSString *_suggestedPhrase;
    UILabel *_label;
}

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) id <WFWorkflowWizardSuggestedPhraseViewDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *suggestedPhrase;

- (struct CGSize)intrinsicContentSize;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)unhighlight;
- (void)highlight;
- (id)initWithSuggestedPhrase:(id)arg1;
- (void)fadeOutHighlight;

@end
