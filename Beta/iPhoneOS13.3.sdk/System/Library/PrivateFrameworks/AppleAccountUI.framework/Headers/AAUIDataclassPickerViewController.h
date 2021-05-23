/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/Swift-Protocol.h>

@class AAUIBuddyView, AAUIHeaderView, NSArray, NSDictionary, NSString, UITableView, _AAUIDataclassOptionCache;

@protocol AAUIDataclassPickerViewControllerDelegate;

@interface AAUIDataclassPickerViewController : UIViewController <Swift>

{
    AAUIHeaderView *_tableHeaderView;
    UITableView *_tableView;
    AAUIBuddyView *_tableFooterView;
    NSArray *_compactConstraints;
    NSArray *_expandedConstraints;
    _AAUIDataclassOptionCache *_dataclassOptionCache;
    id <AAUIDataclassPickerViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) AAUIBuddyView *view;
@property (weak, nonatomic) id <AAUIDataclassPickerViewControllerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *dataclassOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)_cancelBarButtonItem;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)_tableView;
- (id)_tableHeaderView;
- (id)_tableFooterView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)heightForHeaderInTableView:(id)arg1;
- (double)heightForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (id)viewForFooterInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)_cancelButtonSelected:(id)arg1;
- (id)_nextBarButtonItem;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (void)_nextButtonSelected:(id)arg1;
- (id)initWithDataclassOptions:(struct NSDictionary *)arg1;
- (id)_signOutFooterText;
- (void)_additionalInformationSelected:(id)arg1;
- (void)_delegate_signOutViewControllerDidCancel;
- (void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)arg1;
- (void)_dismissAdditionalInformation:(id)arg1;
- (double)_compressedHeightForView:(id)arg1 containedInView:(id)arg2;
- (void)switchTableViewCellDidUpdateValue:(id)arg1;

@end
