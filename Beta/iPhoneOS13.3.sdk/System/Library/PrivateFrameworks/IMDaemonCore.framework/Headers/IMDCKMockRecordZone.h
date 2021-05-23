/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IDSKVStore, NSString;

@protocol OS_dispatch_queue;

@interface IMDCKMockRecordZone : NSObject

{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    IDSKVStore *_recordStore;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSKVStore *recordStore;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)handleOperation:(id)arg1;
- (id)_kvStorePath;
- (void)_handleFetchZoneChangesOperation:(id)arg1;
- (void)_handleModifyRecordsOperation:(id)arg1;
- (id)_fetchRecordZoneChangesOptionsFromOperation:(id)arg1;
- (unsigned long long)_fetchResultLimit:(id)arg1;
- (id)_ckRecordFromData:(id)arg1;
- (id)_serializedCKRecordData:(id)arg1;

@end
