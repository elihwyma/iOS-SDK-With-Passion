/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewController.h>

@class NSHashTable, NSMapTable, NSString;

@interface HUTableViewController : UITableViewController

{
    _Bool _sectionContentInsetFollowsLayoutMargins;
    _Bool _viewLayingOut;
    NSHashTable *_childViewControllersAtViewWillAppearTime;
    NSHashTable *_childViewControllersAtViewWillDisappearTime;
    NSMapTable *_installedChildViewControllersKeyedByCell;
}

@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell;
@property (nonatomic, getter=isViewLayingOut) _Bool viewLayingOut;
@property (nonatomic) _Bool sectionContentInsetFollowsLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)contentSizeCategoryDidChange;
- (void)didUpdateRequiredHeightForCell:(id)arg1;

@end
