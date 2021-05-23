/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableDictionary, NSString, UITableView, UIVisualEffectView;

@protocol ObjectManipulationDelegate;

@interface ObjectManipulationViewController : UIViewController

{
    id <ObjectManipulationDelegate> _refreshDelegate;
    UIViewController *_itemPreviewViewController;
    UITableView *_tableView;
    NSArray *_customizationGroups;
    NSArray *_customizations;
    NSMutableDictionary *_sectionHeaders;
    UIVisualEffectView *_backgroundView;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *customizationGroups;
@property (retain, nonatomic) NSArray *customizations;
@property (retain, nonatomic) NSMutableDictionary *sectionHeaders;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (weak, nonatomic) id <ObjectManipulationDelegate> refreshDelegate;
@property (retain, nonatomic) UIViewController *itemPreviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)donePressed;
- (void)didToggleSwitch:(id)arg1;
- (void)_reloadCustomizations;
- (id)initWithCustomizationGroups:(id)arg1;

@end
