/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class CKServerChangeToken, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthCheckOperation : _BRCOperation

{
    CKServerChangeToken *_changeToken;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_deletedRecordIds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;
- (void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2;

@end
