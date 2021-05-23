/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/_UINavigationBarTitleView.h>

@class UISearchBar;

@interface WFActionDrawerSearchBarWrapper : _UINavigationBarTitleView

{
    UISearchBar *_searchBar;
}

@property (nonatomic, readonly) UISearchBar *searchBar;

- (id)initWithSearchBar:(id)arg1;

@end
