/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCAccountSession, BRCContainerMetadataSyncPersistedState, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncDownOperation : _BRCOperation

{
    BRCAccountSession *_session;
    BRCContainerMetadataSyncPersistedState *_state;
    NSMutableArray *_recordIDsForDesiredAssets;
    NSMutableArray *_desiredKeysForDesiredAssets;
    NSMutableDictionary *_recordIDsToVersionETagsForDesiredAssets;
    NSMutableSet *_containerIDsUpdated;
    _Bool _shouldFetchAnotherBatch;
}

@property (nonatomic, readonly) _Bool shouldFetchAnotherBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithSession:(id)arg1 state:(id)arg2;
- (void)_completedWithServerChangeToken:(id)arg1;
- (void)performAfterFetchingAssetContents:(CDUnknownBlockType)arg1;
- (void)performAfterFetchingRecordChanges:(CDUnknownBlockType)arg1;
- (void)performAfterCreatingZoneIfNeeded:(CDUnknownBlockType)arg1;

@end
