/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSString;

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController

{
    NSString *_personLocalIdentifier;
    NSMutableArray *_items;
    NSArray *_suggestedContacts;
}

@property (retain) NSString *personLocalIdentifier;
@property (retain) NSMutableArray *items;
@property (retain) NSArray *suggestedContacts;
@property (nonatomic, readonly) _Bool hasResults;

- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithStyle:(long long)arg1 personLocalIdentifier:(id)arg2 suggestedContacts:(id)arg3;
- (void)updateItemsForSearchString:(id)arg1;
- (id)contactAtIndexPath:(id)arg1;
- (id)personAtIndexPath:(id)arg1;

@end
