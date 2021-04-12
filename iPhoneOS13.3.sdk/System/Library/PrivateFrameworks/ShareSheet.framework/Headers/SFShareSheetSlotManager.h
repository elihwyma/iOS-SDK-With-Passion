//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/SFShareSheetSlotObserverProtocol-Protocol.h>

@class NSXPCConnection;
@protocol SFShareSheetSlotManagerDelegate;

@interface SFShareSheetSlotManager : NSObject <SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id <SFShareSheetSlotManagerDelegate> _delegate;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <SFShareSheetSlotManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(BOOL)arg6;
- (void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)performAirDropActivityInHostWithNoContentView:(BOOL)arg1;
- (void)performActivityInHostWithUUID:(id)arg1;
- (void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2;
- (void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2;
- (void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)arg1;
- (void)activityViewControllerPerformEditActionsWithSessionID:(id)arg1;
- (void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg1;
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg1;
- (void)activityViewControllerPerformedActivityWithInfoDictionary:(id)arg1;
- (void)activityViewControllerWithSessionID:(id)arg1 updatedFavoritesProxies:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedDefaultActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 favoritedActivity:(BOOL)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4;
- (void)activityViewControllerWithSessionID:(id)arg1 toggledActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedPersonWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActionWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActivityWithIdentifier:(id)arg2;
- (void)sendConfiguration:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)connectToDaemonWithSessionID:(id)arg1 discoveryContext:(id)arg2 assetIdentifiers:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)invalidate;
- (void)activate;
- (id)remoteObjectProxy;
- (void)connectionInterrupted;
- (void)connectionEstablished;
- (void)invalidated;
- (void)interrupted;
- (void)ensureConnectionEstablished;
- (void)ensureXPCStarted;
- (id)init;

@end

