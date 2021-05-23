/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBIconController, SBRecentAppLayouts;

@protocol SBAppSwitcherModelDelegate;

@interface SBAppSwitcherModel : NSObject

{
    SBIconController *_iconController;
    SBRecentAppLayouts *_recents;
    id _recentsChangedNotificationObserver;
    id <SBAppSwitcherModelDelegate> _delegate;
}

@property (weak, nonatomic) id <SBAppSwitcherModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)appSwitcherHeaderIconImageDescriptorName;

- (id)init;
- (void)dealloc;
- (void)remove:(id)arg1;
- (void)hide:(id)arg1;
- (id)_recentAppLayoutsController;
- (id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(_Bool)arg2;
- (void)_warmUpIconsForRecentAppLayouts:(id)arg1;
- (void)_warmUpIconsForAppLayout:(id)arg1;
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2;
- (void)addToFront:(id)arg1;
- (void)removeAppLayouts:(id)arg1;
- (void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2;
- (void)recentAppLayouts:(id)arg1 didRemoveAppLayoutForFallingOffList:(id)arg2;
- (id)appLayoutsIncludingHiddenAppLayouts:(_Bool)arg1;
- (id)appLayoutsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(_Bool)arg2;

@end
