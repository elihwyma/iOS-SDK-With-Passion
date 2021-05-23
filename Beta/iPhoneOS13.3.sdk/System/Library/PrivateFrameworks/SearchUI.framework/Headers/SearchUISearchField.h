/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UISearchTextField.h>

@class SearchUIResultsViewController;

@interface SearchUISearchField : UISearchTextField

{
    SearchUIResultsViewController *_resultsViewController;
}

@property (weak) SearchUIResultsViewController *resultsViewController;

- (id)nextResponder;

@end
