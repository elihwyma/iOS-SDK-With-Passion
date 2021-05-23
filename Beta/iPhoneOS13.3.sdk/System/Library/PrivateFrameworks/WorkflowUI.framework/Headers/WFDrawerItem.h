/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UISearchBar, UIView, UIViewController;

@protocol WFDrawerPane;

@interface WFDrawerItem : NSObject

{
    UIViewController<WFDrawerPane> *_drawerPane;
}

@property (weak, nonatomic) UIViewController<WFDrawerPane> *drawerPane;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UISearchBar *searchBar;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)initWithDrawerPane:(id)arg1;

@end
