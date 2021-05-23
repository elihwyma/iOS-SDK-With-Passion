/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCServerZone, NSString;

__attribute__((visibility("hidden")))
@interface BRCSyncDownOperation : _BRCOperation

{
    BRCServerZone *_serverZone;
    unsigned long long _editedAndDeletedRecordsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;
- (_Bool)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)arg1;
- (void)_performAfterFetchingRecordChanges:(CDUnknownBlockType)arg1;
- (void)_startSyncDown;
- (void)_startCreateZoneAndSubscriptionAndSyncDown;

@end
