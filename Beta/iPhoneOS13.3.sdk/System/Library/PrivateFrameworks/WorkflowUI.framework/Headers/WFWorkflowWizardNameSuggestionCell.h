/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UILabel, UIStackView;

@protocol WFWorkflowWizardNameSuggestionCellDelegate;

@interface WFWorkflowWizardNameSuggestionCell : UITableViewCell

{
    id <WFWorkflowWizardNameSuggestionCellDelegate> _delegate;
    NSArray *_suggestedPhrases;
    UIStackView *_stackView;
    UILabel *_infoLabel;
    NSArray *_suggestionsViews;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) NSArray *suggestionsViews;
@property (weak, nonatomic) id <WFWorkflowWizardNameSuggestionCellDelegate> delegate;
@property (copy, nonatomic) NSString *infoText;
@property (copy, nonatomic) NSArray *suggestedPhrases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)suggestionsFont;
+ (id)suggestionsText;
+ (double)preferredHeightForWidth:(double)arg1 infoText:(id)arg2 suggestedPhrases:(id)arg3;
+ (id)infoFont;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)workflowWizardSuggestedPhraseViewDidSelectSuggestedPhrase:(id)arg1;

@end
