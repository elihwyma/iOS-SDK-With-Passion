/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UISearchController.h>

@class PSKeyboardNavigationSearchBar, UIViewController;

@protocol PSKeyboardNavigationSearchResultsController;

@interface PSKeyboardNavigationSearchController : UISearchController

{
    UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;
    PSKeyboardNavigationSearchBar *searchBar;
}

@property (retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar;
@property (retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;

- (id)initWithSearchResultsController:(id)arg1;
- (void)_escapeKeyPressed;
- (void)_downArrowKeyPressed;
- (void)_upArrowKeyPressed;

@end
