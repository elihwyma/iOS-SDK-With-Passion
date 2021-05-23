/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCContainerScheduler, CKServerChangeToken, NSString;

__attribute__((visibility("hidden")))
@interface BRCPeriodicSyncOperation : _BRCOperation

{
    BRCContainerScheduler *_scheduler;
    CKServerChangeToken *_metadataChangeToken;
    CKServerChangeToken *_zoneHealthChangeToken;
    CKServerChangeToken *_sideCarChangeToken;
}

@property (nonatomic, readonly) BRCContainerScheduler *scheduler;
@property (nonatomic, readonly) CKServerChangeToken *metadataChangeToken;
@property (nonatomic, readonly) CKServerChangeToken *zoneHealthChangeToken;
@property (nonatomic, readonly) CKServerChangeToken *sideCarChangeToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithContainerScheduler:(id)arg1 metadataChangeToken:(id)arg2 zoneHealthChangeToken:(id)arg3 sideCarChangeToken:(id)arg4;
- (_Bool)scheduleSyncDownIfNeededForZoneID:(id)arg1 zoneIfAny:(id)arg2;

@end
