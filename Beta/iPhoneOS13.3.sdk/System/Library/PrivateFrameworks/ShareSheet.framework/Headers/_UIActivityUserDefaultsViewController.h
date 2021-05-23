/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSDictionary, NSDiffableDataSourceSnapshot, NSMutableDictionary, NSString, UIImage, UITableView, UIVisualEffectView, _UIActivityUserDefaults, _UIActivityUserDefaultsDataSource;

@protocol _UIActivityUserDefaultsViewControllerDelegate;

@interface _UIActivityUserDefaultsViewController : UIViewController

{
    id <_UIActivityUserDefaultsViewControllerDelegate> _userDefaultsDelegate;
    NSArray *_activities;
    NSArray *_favoritesProxies;
    NSMutableDictionary *_favoritesByUUID;
    NSArray *_suggestionProxies;
    NSMutableDictionary *_suggestionsByUUID;
    NSDictionary *_activitiesByUUID;
    NSArray *_applicationActivities;
    NSArray *_orderedUUIDs;
    long long _activityCategory;
    _UIActivityUserDefaults *_userDefaults;
    UIImage *_placeholderImage;
    _UIActivityUserDefaultsDataSource *_diffableDataSource;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
    UITableView *_tableView;
    UIVisualEffectView *_backgroundView;
}

@property (copy, nonatomic) NSArray *activities;
@property (copy, nonatomic) NSArray *favoritesProxies;
@property (retain, nonatomic) NSMutableDictionary *favoritesByUUID;
@property (copy, nonatomic) NSArray *suggestionProxies;
@property (retain, nonatomic) NSMutableDictionary *suggestionsByUUID;
@property (retain, nonatomic) NSDictionary *activitiesByUUID;
@property (retain, nonatomic) NSArray *applicationActivities;
@property (retain, nonatomic) NSArray *orderedUUIDs;
@property (nonatomic) long long activityCategory;
@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) _UIActivityUserDefaultsDataSource *diffableDataSource;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (weak, nonatomic) id <_UIActivityUserDefaultsViewControllerDelegate> userDefaultsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)initWithActivities:(id)arg1 userDefaults:(id)arg2;
- (void)editUserDefaults;
- (void)dismissUserDefaults;
- (void)configureSwitchForCell:(id)arg1 activityProxy:(id)arg2;
- (void)updateUserDefaultsAnimated:(_Bool)arg1;
- (void)toggleActivityHiddenForControl:(id)arg1;
- (void)doneEditingUserDefaults;
- (id)cellForItemIdentifier:(id)arg1;
- (id)activityForRowAtIndexPath:(id)arg1;
- (id)initWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 activitiesByUUID:(id)arg3 applicationActivities:(id)arg4 orderedUUIDs:(id)arg5 activityCategory:(long long)arg6;
- (void)toggleActivityHiddenForRowAtIndexPath:(id)arg1;
- (long long)preferredActivityCategory;

@end
