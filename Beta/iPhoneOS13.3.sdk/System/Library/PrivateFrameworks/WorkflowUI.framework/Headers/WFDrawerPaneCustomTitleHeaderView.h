/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, WFDrawerPaneCloseButton;

@protocol WFDrawerPaneHeaderViewDelegate;

@interface WFDrawerPaneCustomTitleHeaderView : UIView

{
    id <WFDrawerPaneHeaderViewDelegate> _delegate;
    UIView *_titleView;
    WFDrawerPaneCloseButton *_closeButton;
}

@property (weak, nonatomic, readonly) WFDrawerPaneCloseButton *closeButton;
@property (weak, nonatomic, readonly) UIView *titleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WFDrawerPaneHeaderViewDelegate> delegate;

- (id)layoutConstraints;
- (id)initWithTitleView:(id)arg1;
- (void)closeButtonTouchedUp:(id)arg1;

@end
