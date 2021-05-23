/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UISearchBar, UIView, UIViewController, WFDrawerPaneContainer;

@protocol WFDrawerPaneHeaderView;

@protocol WFDrawerPane <Swift>

@property (retain, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) WFDrawerPaneContainer *container;
@property (nonatomic, readonly) struct CGRect grabberAreaBounds;
@property (nonatomic) double bottomContentInset;
@property (nonatomic) double topCornerRadius;
@property (weak, nonatomic) UIView<WFDrawerPaneHeaderView> *activeHeaderView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UISearchBar *searchBar;

- (unsigned short)initWithViewController: /* Error: Ran out of types for this method. */;

@end
