/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UITableViewController.h>

@class WKDataListSuggestionsControl;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsViewController : UITableViewController

{
    WKDataListSuggestionsControl *_control;
}

@property (weak, nonatomic) WKDataListSuggestionsControl *control;

- (void)reloadData;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
