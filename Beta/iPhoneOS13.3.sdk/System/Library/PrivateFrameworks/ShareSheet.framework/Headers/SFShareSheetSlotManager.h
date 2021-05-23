/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol SFShareSheetSlotManagerDelegate;

@interface SFShareSheetSlotManager : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    id <SFShareSheetSlotManagerDelegate> _delegate;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id <SFShareSheetSlotManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (id)remoteObjectProxy;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)activate;
- (void)invalidated;
- (void)interrupted;
- (_Bool)shouldEscapeXpcTryCatch;
- (void)connectionEstablished;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedPersonWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActivityWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActionWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 updatedFavoritesProxies:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 toggledActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 favoritedActivity:(_Bool)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedDefaultActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerPerformEditActionsWithSessionID:(id)arg1;
- (void)connectToDaemonWithSessionID:(id)arg1 discoveryContext:(id)arg2 assetIdentifiers:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg1;
- (void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg1;
- (void)activityViewControllerPerformedActivityWithInfoDictionary:(id)arg1;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)arg1;
- (void)sendConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectionInterrupted;
- (void)performActivityInHostWithUUID:(id)arg1;
- (void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2;
- (void)performAirDropActivityInHostWithNoContentView:(_Bool)arg1;
- (void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2;
- (void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4;
- (void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(_Bool)arg6;
- (void)ensureConnectionEstablished;
- (void)ensureXPCStarted;

@end
