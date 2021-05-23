/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

#import <Foundation/NSObject.h>

@class LiveFSFPExtensionHelper, LiveFSFPItemHelper, LiveFSRBTree, NSPointerArray, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LiveFSFPEnumeratorDataContainer : NSObject

{
    LiveFSFPExtensionHelper *ext;
    NSString *_containerID;
    _Bool _hasPersistentIDs;
    _Bool historyReset;
    _Bool isActive;
    NSPointerArray *ourEnumerators;
    NSObject<OS_dispatch_queue> *updateQueue;
    _Bool _isDir;
    _Bool _addedToExtension;
    _Bool _isVolumeWide;
    int _state;
    LiveFSFPItemHelper *_enumeratedItem;
    NSString *_enumeratedItemID;
    LiveFSRBTree *_contentsSortedByDate;
    LiveFSRBTree *_contentsSortedByName;
}

@property (readonly) _Bool hasPersistentIDs;
@property (readonly) _Bool isDir;
@property _Bool addedToExtension;
@property int state;
@property (readonly) _Bool isVolumeWide;
@property (retain, readonly) NSString *containerID;
@property (readonly) LiveFSFPItemHelper *enumeratedItem;
@property (retain) NSString *enumeratedItemID;
@property (retain, readonly) LiveFSRBTree *contentsSortedByDate;
@property (retain, readonly) LiveFSRBTree *contentsSortedByName;

- (void)dealloc;
- (void)invalidate;
- (id)loadContents;
- (void)LIUpdateUpdatedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3;
- (void)LIUpdateUpdatedName:(id)arg1 interestedItem:(id)arg2;
- (void)LIUpdateDeletedItem:(id)arg1 name:(id)arg2 how:(int)arg3 interestedItem:(id)arg4;
- (void)LIUpdateDeletedName:(id)arg1 item:(id)arg2 how:(int)arg3 interestedItem:(id)arg4;
- (void)LIUpdateRenameFrom:(id)arg1 fromName:(id)arg2 fromID:(id)arg3 intoItem:(id)arg4 toName:(id)arg5 overID:(id)arg6;
- (void)LIUpdateVolumeWideUpdatedName:(id)arg1 interestedItem:(id)arg2;
- (void)LIUpdateVolumeWideDeletedName:(id)arg1 interestedItem:(id)arg2;
- (void)LIUpdateHistoryResetItem:(id)arg1 interestedItem:(id)arg2;
- (void)LIUpdateHistoryResetName:(id)arg1 interestedItem:(id)arg2;
- (void)LIUpdateDone:(id)arg1;
- (id)initForExtension:(id)arg1 item:(id)arg2;
- (void)dropInterestForEnumeratedItem:(id)arg1;
- (void)doShutdown;
- (id)readDirBuffersForBufferBlock:(CDUnknownBlockType)arg1 andEntryBlock:(CDUnknownBlockType)arg2;
- (void)applyDeleteAcrossEnumerators:(id)arg1 newTombstone:(id)arg2 toSelf:(_Bool)arg3;
- (void)doProcessItemDeleted:(id)arg1;
- (void)handleEnumeratedItemChanged;
- (void)makeAllEnumeratorsDead;
- (void)resetAllEnumerators;
- (void)doShutdownOnEnumeratorHelperQueue;
- (id)ensureConnectedForUpdates;
- (void)applyAddAcrossEnumerators:(id)arg1 newName:(id)arg2 forSelf:(_Bool)arg3;
- (id)initWithEnumeratedItem:(id)arg1 fileHandle:(id)arg2 extension:(id)arg3;
- (void)addEnumerator:(id)arg1;
- (void)dropEnumerator:(id)arg1;
- (void)dispatchOntoUpdateQueue:(CDUnknownBlockType)arg1;
- (void)doProcessItemUpdated:(id)arg1;

@end
