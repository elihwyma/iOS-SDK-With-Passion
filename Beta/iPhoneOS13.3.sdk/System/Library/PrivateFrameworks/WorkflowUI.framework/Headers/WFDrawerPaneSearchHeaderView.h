/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UISearchBar;

@protocol WFDrawerPaneHeaderViewDelegate;

@interface WFDrawerPaneSearchHeaderView : UIView

{
    id <WFDrawerPaneHeaderViewDelegate> _delegate;
    UISearchBar *_searchBar;
    UIButton *_closeButton;
    UIView *_separatorView;
}

@property (weak, nonatomic, readonly) UIButton *closeButton;
@property (weak, nonatomic, readonly) UIView *separatorView;
@property (weak, nonatomic, readonly) UISearchBar *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WFDrawerPaneHeaderViewDelegate> delegate;

- (id)layoutConstraints;
- (id)initWithSearchBar:(id)arg1;

@end
