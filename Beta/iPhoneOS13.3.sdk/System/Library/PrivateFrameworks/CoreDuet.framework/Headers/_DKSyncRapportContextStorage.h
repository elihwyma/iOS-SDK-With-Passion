/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncRapportStorage.h>

@protocol _DKSyncRemoteContextStorageDelegate;

@interface _DKSyncRapportContextStorage : _DKSyncRapportStorage

{
    id <_DKSyncRemoteContextStorageDelegate> _delegate;
}

@property (retain, nonatomic) id <_DKSyncRemoteContextStorageDelegate> delegate;

+ (id)sharedInstance;

- (void)registerRequestIDsWithClient:(id)arg1;
- (void)handleFetchContextValuesWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)handleSendContextValuesWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)handleSubscribeToContextValueChangeNotificationsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)handleUnsubscribeToContextValueChangeNotificationsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)handleFetchContextValuesWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleSendContextValuesWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleSubscribeToContextValueChangeNotificationsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleUnsubscribeToContextValueChangeNotificationsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;

@end
