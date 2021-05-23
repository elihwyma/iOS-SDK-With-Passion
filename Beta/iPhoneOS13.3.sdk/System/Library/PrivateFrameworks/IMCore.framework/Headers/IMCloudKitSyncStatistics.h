/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@interface IMCloudKitSyncStatistics : NSObject

{
    unsigned long long _syncedChatCount;
    unsigned long long _totalChatCount;
    unsigned long long _syncedAttachmentCount;
    unsigned long long _totalAttachmentCount;
    unsigned long long _syncedMessageCount;
    unsigned long long _totalMessageCount;
    unsigned long long _totalRecordCount;
    unsigned long long _syncedRecordCount;
}

@property (nonatomic) unsigned long long syncedChatCount;
@property (nonatomic) unsigned long long totalChatCount;
@property (nonatomic) unsigned long long syncedAttachmentCount;
@property (nonatomic) unsigned long long totalAttachmentCount;
@property (nonatomic) unsigned long long syncedMessageCount;
@property (nonatomic) unsigned long long totalMessageCount;
@property (nonatomic) unsigned long long totalRecordCount;
@property (nonatomic) unsigned long long syncedRecordCount;
@property (nonatomic, readonly) double percentSynced;

+ (double)calculatePercentageOfTotal:(double)arg1 count:(double)arg2;
+ (id)percentStringFromDouble:(double)arg1;
+ (id)percentStringFromTotal:(double)arg1 count:(double)arg2;
+ (id)_createSyncStatisticsDictionary:(long long)arg1 messageSyncCount:(long long)arg2 chatCount:(long long)arg3 chatSyncCount:(long long)arg4 attachmentCount:(long long)arg5 attachmentSyncCount:(long long)arg6;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)arg1 syncType:(long long)arg2 count:(double)arg3 max:(double)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_statsString:(id)arg1 count:(long long)arg2 total:(long long)arg3;
- (id)initWithStatisticsDictionary:(id)arg1;
- (id)_syncStatisticsDictionary;

@end
