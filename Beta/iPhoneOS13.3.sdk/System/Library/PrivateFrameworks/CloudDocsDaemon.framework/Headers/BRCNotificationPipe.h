/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCDataOrDocsScopeGatherer, BRCItemGlobalID, BRCNotificationManager, BRCXPCClient, BRFileObjectID, BRNotificationQueue, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@protocol BRCNotificationPipeDelegate, BRItemNotificationReceiving, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCNotificationPipe : NSObject

{
    id <BRItemNotificationReceiving> _receiver;
    BRNotificationQueue *_notifs;
    CDUnknownBlockType _boostReply;
    BRCXPCClient *_client;
    BRCItemGlobalID *_oldWatchedAncestorItemGlobalID;
    BRCItemGlobalID *_watchedAncestorItemGlobalID;
    BRFileObjectID *_watchedAncestorFileObjectID;
    NSString *_watchedAncestorFilenameToItem;
    BRCDataOrDocsScopeGatherer *_gatherer;
    NSObject<OS_dispatch_group> *_gatherGroup;
    _Bool _hasUpdatesInFlight;
    _Bool _volumeIsCaseSensitive;
    NSMutableDictionary *_pendingProgressUpdatesByID;
    _Bool _hasProgressUpdatesInFlight;
    unsigned short _watchItemOptions;
    int _watchKind;
    NSString *_watchNamePrefix;
    NSString *_watchForBundleID;
    NSMutableSet *_externalAppLibraries;
    NSSet *_watchedAppLibraries;
    NSSet *_watchedAppLibraryIDs;
    unsigned long long _watchedAppLibrariesFlags;
    unsigned long long _initialGatherMaxRank;
    unsigned long long _secondaryGatherMaxRank;
    BRCNotificationManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    id <BRCNotificationPipeDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) BRCItemGlobalID *oldWatchedAncestorItemGlobalID;
@property (retain) BRCItemGlobalID *watchedAncestorItemGlobalID;
@property (retain) BRFileObjectID *watchedAncestorFileObjectID;
@property (retain) NSString *watchedAncestorFilenameToItem;
@property (nonatomic, readonly) BRCNotificationManager *manager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <BRCNotificationPipeDelegate> delegate;

- (void)dealloc;
- (oneway void)invalidate;
- (void)close;
- (void)boostPriority:(CDUnknownBlockType)arg1;
- (void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 gatherReply:(CDUnknownBlockType)arg3;
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatherReply:(CDUnknownBlockType)arg4;
- (void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatherReply:(CDUnknownBlockType)arg3;
- (void)watchScopes:(unsigned short)arg1 gatherReply:(CDUnknownBlockType)arg2;
- (void)addNotification:(id)arg1 asDead:(_Bool)arg2;
- (void)addDequeueCallback:(CDUnknownBlockType)arg1;
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 manager:(id)arg3 startingRank:(unsigned long long)arg4;
- (id)initWithReceiver:(id)arg1 manager:(id)arg2 startingRank:(unsigned long long)arg3;
- (void)processProgressUpdates:(id)arg1;
- (void)processUpdates:(id)arg1 withRank:(unsigned long long)arg2;
- (void)invalidateIfWatchingAppLibraryIDs:(id)arg1;
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg1;
- (void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 gatherReply:(CDUnknownBlockType)arg3;
- (id)_initWithManager:(id)arg1 startingRank:(unsigned long long)arg2;
- (void)_registerAsWatcherIfNeeded;
- (void)_prepareForSecondGatherWithRank:(unsigned long long)arg1;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;
- (int)_isInterestingUpdate:(id)arg1;
- (void)_gatherIfNeededAndFlushAsync;
- (void)_flushProgressUpdates;
- (void)_processProgressUpdates:(id)arg1;
- (void)__flush;
- (void)watchItemAtURL:(id)arg1 lookup:(id)arg2 options:(unsigned short)arg3 gatherReply:(CDUnknownBlockType)arg4;
- (void)_stopWatchingItems;
- (void)watchScopes:(unsigned short)arg1 trustedAppLibraryIDs:(id)arg2 gatherReply:(CDUnknownBlockType)arg3;
- (void)_triggerImmediateReadOfDocumentIfNeeded;

@end
