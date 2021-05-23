/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@class NSString, NSUUID;

@interface MSPRemoteFavoritesContainerPersister

{
    NSUUID *_lastOperationIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reportErrorIfAny:(id)arg1 purpose:(id)arg2;
- (void)fetchStateSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)favoritesDidChange;
- (void)historyDidChange;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchContentsWithCompletion:(CDUnknownBlockType)arg1;

@end
