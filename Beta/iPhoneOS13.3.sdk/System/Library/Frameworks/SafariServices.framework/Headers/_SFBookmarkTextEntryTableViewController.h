/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewController.h>

@class NSString, _SFBookmarkTextEntryTableViewCell;

@protocol _SFBookmarkTextEntryTableViewControllerDelegate;

@interface _SFBookmarkTextEntryTableViewController : UITableViewController

{
    id <_SFBookmarkTextEntryTableViewControllerDelegate> _delegate;
    NSString *_initialText;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    _SFBookmarkTextEntryTableViewCell *_textEntryCell;
}

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithBookmarkInfoViewField:(unsigned long long)arg1 text:(id)arg2 autocapitalizationType:(long long)arg3 autocorrectionType:(long long)arg4 delegate:(id)arg5;
- (void)_returnWasPressedInTextField:(id)arg1;

@end
