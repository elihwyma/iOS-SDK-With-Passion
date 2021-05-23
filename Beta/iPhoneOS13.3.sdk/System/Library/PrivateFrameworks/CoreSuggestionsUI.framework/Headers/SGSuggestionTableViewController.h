/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <UIKit/UITableViewController.h>

#import <CoreSuggestionsUI/Swift-Protocol.h>

@class NSString, SGSuggestionStore;

@interface SGSuggestionTableViewController : UITableViewController <Swift>

{
    SGSuggestionStore *_suggestionStore;
}

@property (retain, nonatomic) SGSuggestionStore *suggestionStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)presentViewController:(id)arg1;
- (void)dismissViewController:(id)arg1;
- (void)updatePrefferedSize;
- (void)listDidChangeNotification:(id)arg1;

@end
