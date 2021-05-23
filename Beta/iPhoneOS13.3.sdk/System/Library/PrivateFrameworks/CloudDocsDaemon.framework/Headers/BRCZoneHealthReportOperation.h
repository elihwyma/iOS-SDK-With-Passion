/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCAccountSession, NSString;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthReportOperation : _BRCOperation

{
    _Bool shouldPerformAnotherBatch;
    BRCAccountSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithSession:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (_Bool)shouldPerformAnotherBatch;
- (void)_reportRecords:(id)arg1 requestID:(unsigned long long)arg2;

@end
