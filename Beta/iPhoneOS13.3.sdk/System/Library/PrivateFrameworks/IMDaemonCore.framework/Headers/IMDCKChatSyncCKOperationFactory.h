/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@interface IMDCKChatSyncCKOperationFactory : NSObject

- (id)_chatSyncOperationGroupWithName:(id)arg1;
- (id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;
- (id)_chatFetchRecordZoneChangesCKConfiguration;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 groupName:(id)arg4;
- (id)_chatWriteRecordsCKConfiguration;
- (id)_chatSyncOperationGroup;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3;
- (id)saveChatsCKOperationUsingRecordsToSave:(id)arg1;
- (id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1;

@end
