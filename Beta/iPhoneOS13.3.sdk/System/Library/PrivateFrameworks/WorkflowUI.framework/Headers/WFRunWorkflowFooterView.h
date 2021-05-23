/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionReusableView.h>

@class WFFloatingButton, WFModulesQuickLookView;

@protocol WFRunWorkflowFooterViewDelegate;

@interface WFRunWorkflowFooterView : UICollectionReusableView

{
    id <WFRunWorkflowFooterViewDelegate> _delegate;
    WFModulesQuickLookView *_quickLookView;
    WFFloatingButton *_addButton;
}

@property (retain, nonatomic) WFFloatingButton *addButton;
@property (weak, nonatomic) id <WFRunWorkflowFooterViewDelegate> delegate;
@property (nonatomic, readonly) WFModulesQuickLookView *quickLookView;

+ (double)preferredBottomPaddingHeight;
+ (struct CGSize)preferredQuickLookViewSize;
+ (double)preferredAddButtonHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)updateAddButtonGradient;
- (void)didTapAddButton;
- (void)setQuickLookViewHidden:(_Bool)arg1 addButtonHidden:(_Bool)arg2;

@end
