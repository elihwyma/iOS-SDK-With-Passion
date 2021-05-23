/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

@class NSPersistentHistoryToken, NSString;

@protocol BCCloudSyncVersions

@property (copy, nonatomic, readonly) NSString *dataType;
@property (copy, nonatomic, readonly) NSPersistentHistoryToken *historyToken;
@property (nonatomic, readonly) long long historyTokenOffset;
@property (nonatomic, readonly) long long cloudVersion;
@property (nonatomic, readonly) long long localVersion;
@property (nonatomic, readonly) long long syncVersion;

@end
