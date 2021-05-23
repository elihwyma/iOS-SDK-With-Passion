/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSString, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider;

@protocol SBFluidSwitcherPageContentViewProviderDelegate;

@interface SBFluidSwitcherPageContentViewProvider : NSObject

{
    id <SBFluidSwitcherPageContentViewProviderDelegate> _delegate;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    NSMapTable *_pageContentViewToTransientOverlayViewController;
    NSMutableArray *_transientOverlayPageContentViews;
    NSMutableDictionary *_switcherServiceViewControllerMap;
}

@property (weak, nonatomic) id <SBFluidSwitcherPageContentViewProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)_interfaceOrientation;
- (id)_containerViewController;
- (id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2 lockoutViewProvider:(id)arg3;
- (void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;
- (void)relinquishTransientOverlayViewController:(id)arg1;
- (void)purgePageContentViewForAppLayout:(id)arg1;
- (_Bool)isSuitableForRecycledItemContainer:(id)arg1;
- (id)pageContentViewForAppLayout:(id)arg1 setActive:(_Bool)arg2;
- (id)existingTransientOverlayViewControllerForAppLayout:(id)arg1;
- (void)_applyTransientOverlayViewController:(id)arg1 toPageContentView:(id)arg2;
- (id)_viewForService:(id)arg1 appLayout:(id)arg2;
- (struct CGSize)_pageViewSizeForAppLayout:(id)arg1;
- (id)_snapshotViewForAppLayout:(id)arg1 setActive:(_Bool)arg2;
- (void)_relinquishTransientOverlayViewController:(id)arg1 forPageContentView:(id)arg2;
- (long long)_preferredContentInterfaceOrientationForViewController:(id)arg1 preferredInterfaceOrientation:(long long)arg2;
- (id)_snapshotViewDelegate;
- (void)appSwitcherTransientOverlayPageContentViewDidChangeActive:(id)arg1;
- (void)appSwitcherTransientOverlayPageContentViewDidChangeContainerOrientation:(id)arg1;

@end
