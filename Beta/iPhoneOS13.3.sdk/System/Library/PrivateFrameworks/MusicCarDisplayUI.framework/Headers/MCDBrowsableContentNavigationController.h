/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UITabBarController.h>

@class MCDNowPlayingButtonWrapperView, MCDPCContainer, MCDPCModel, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MCDBrowsableContentNavigationController : UITabBarController

{
    _Bool _hasCarScreen;
    _Bool _didFinishInitialLoad;
    _Bool _didFinishInitialViewAppear;
    _Bool _visible;
    _Bool _hasInvalidatedDummyTabs;
    MCDPCContainer *_container;
    UITabBarController *_tabBarController;
    UITabBarController *_hostTabBarController;
    MCDPCModel *_model;
    NSString *_bundleID;
    MCDNowPlayingButtonWrapperView *_nowPlayingButtonView;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) UITabBarController *tabBarController;
@property (weak, nonatomic) UITabBarController *hostTabBarController;
@property (retain, nonatomic) MCDPCModel *model;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) MCDNowPlayingButtonWrapperView *nowPlayingButtonView;
@property (nonatomic) _Bool hasCarScreen;
@property (retain, nonatomic) MCDPCContainer *container;
@property (nonatomic) _Bool didFinishInitialLoad;
@property (nonatomic) _Bool didFinishInitialViewAppear;
@property (nonatomic) _Bool visible;
@property (nonatomic) _Bool hasInvalidatedDummyTabs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)_nowPlayingDidChange:(id)arg1;
- (void)_appRegisteredForContent:(id)arg1;
- (void)_updateNowPlayingButtonVisibility;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;
- (id)initWithBundleID:(id)arg1 model:(id)arg2;
- (void)invalidateAndReloadTabsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadAllHostTabs;
- (void)updateTitleAndTabBarItemsAtIndexes:(id)arg1;
- (id)_hostTabAtIndex:(unsigned long long)arg1 dummyTab:(_Bool)arg2;
- (id)_tabBarItemForViewController:(id)arg1 fromItem:(id)arg2;

@end
