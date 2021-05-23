/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView;

@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactGroupPickerViewController : UIViewController

{
    NSArray *_pickableGroups;
    UITableView *_tableView;
    NSArray *_prohibitedPropertyKeys;
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;
}

@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (weak, nonatomic) id <CNContactGroupPickerDelegate> groupPickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)pickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3;
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2;
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3;
+ (id)propertySections;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancel:(id)arg1;
- (id)initWithGroups:(id)arg1;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;

@end
