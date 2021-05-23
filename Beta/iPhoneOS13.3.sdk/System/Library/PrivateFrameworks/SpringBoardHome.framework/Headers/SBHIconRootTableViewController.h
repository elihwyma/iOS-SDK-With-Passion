/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UITableViewController.h>

@class NSSet, NSString, SBFolder, SBFolderIconImageCache, SBHIconImageCache, UIView, UIViewController, _UILegibilitySettings;

@interface SBHIconRootTableViewController : UITableViewController

{
    SBFolder *_folder;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
}

@property (copy, nonatomic, readonly) NSSet *presentedIconLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SBFolder *folder;
@property (nonatomic, readonly) UIView *contentView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIViewController *deepestFolderController;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic, readonly, getter=isScrolling) _Bool scrolling;
@property (nonatomic, readonly, getter=isScrollTracking) _Bool scrollTracking;
@property (nonatomic) long long currentPageIndex;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIconView:(id)arg1;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isPresentingIconLocation:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1;
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelScrolling;
- (void)noteUserIsInteractingWithIcons;
- (void)revealIcon:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setIdleText:(id)arg1;

@end
