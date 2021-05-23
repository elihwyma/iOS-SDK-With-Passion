/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCServerZone, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_group, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFetchRecordSubResourcesOperation : _BRCOperation

{
    BRCServerZone *_serverZone;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_recordsWithXattrsToFetch;
    NSObject<OS_dispatch_group> *_recordsBeingFetchedGroup;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSObject<OS_dispatch_source> *_xattrFetchingSource;
    NSError *_error;
    _Bool _isDoneFetchingRecords;
}

@property (nonatomic, readonly) NSDictionary *recordsByID;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)stop;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)addRecord:(id)arg1;
- (void)stopWithError:(id)arg1;
- (void)removeAllRecords;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;
- (void)startWithParentOperation:(struct _BRCOperation *)arg1;
- (void)removeRecordByID:(id)arg1;
- (void)waitUntilRecordsAreFetched;
- (void)_scheduleXattrFetch;

@end
