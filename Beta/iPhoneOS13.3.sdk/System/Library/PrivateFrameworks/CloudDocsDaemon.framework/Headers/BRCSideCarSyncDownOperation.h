/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class CKServerChangeToken, NSString;

__attribute__((visibility("hidden")))
@interface BRCSideCarSyncDownOperation : _BRCOperation

{
    CKServerChangeToken *_serverChangeToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (void)_createZone;
- (void)_createSyncDownOperation;
- (void)_saveChangedRecords:(id)arg1 deletedRecords:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;
- (id)createActivity;

@end
