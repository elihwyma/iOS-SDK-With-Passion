/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class CSSearchableIndex, NSString, VCSpotlightSyncOperation, WFDatabaseResult, WFDebouncer;

@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCSpotlightSyncService : NSObject

{
    _Bool _isFetchingClientState;
    WFDatabaseResult *_workflows;
    WFDebouncer *_debouncer;
    VCSpotlightSyncOperation *_syncOperation;
    id <VCDatabaseProvider> _databaseProvider;
    CSSearchableIndex *_index;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) WFDebouncer *debouncer;
@property (retain, nonatomic) VCSpotlightSyncOperation *syncOperation;
@property (nonatomic, readonly) id <VCDatabaseProvider> databaseProvider;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) WFDatabaseResult *workflows;
@property (nonatomic) _Bool isFetchingClientState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)sync;
- (id)initWithDatabaseProvider:(id)arg1;
- (void)requestSync;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)syncOperationFinishedWithRequestToRelaunch:(_Bool)arg1;

@end
