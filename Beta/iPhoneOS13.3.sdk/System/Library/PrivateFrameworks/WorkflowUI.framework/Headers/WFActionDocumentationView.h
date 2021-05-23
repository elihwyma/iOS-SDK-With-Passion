/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class UIStackView, UITextView, WFAction, WFActionDrawerButton;

@protocol WFActionDocumentationViewDelegate;

@interface WFActionDocumentationView : UIView

{
    id <WFActionDocumentationViewDelegate> _delegate;
    WFAction *_action;
    WFActionDrawerButton *_favoriteButton;
    WFActionDrawerButton *_addToWorkflowButton;
    UIStackView *_buttonStackView;
    UITextView *_descriptionView;
}

@property (retain, nonatomic) WFAction *action;
@property (weak, nonatomic) WFActionDrawerButton *favoriteButton;
@property (weak, nonatomic) WFActionDrawerButton *addToWorkflowButton;
@property (weak, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) UITextView *descriptionView;
@property (weak, nonatomic) id <WFActionDocumentationViewDelegate> delegate;

- (id)init;
- (void)updateButtonVisibility;
- (void)configureWithAction:(id)arg1;
- (void)didSelectFavorite;
- (void)didSelectAddToThisWorkflow;
- (void)updateFavoriteButton;

@end
