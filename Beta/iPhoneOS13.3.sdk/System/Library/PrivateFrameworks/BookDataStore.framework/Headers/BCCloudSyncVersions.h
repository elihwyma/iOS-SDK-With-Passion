/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSPersistentHistoryToken, NSString;

@interface BCCloudSyncVersions : NSManagedObject

@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSData *rawHistoryToken;
@property (copy, nonatomic) NSPersistentHistoryToken *historyToken;
@property (nonatomic) long long historyTokenOffset;
@property (nonatomic) long long cloudVersion;
@property (nonatomic) long long localVersion;
@property (nonatomic) long long syncVersion;

- (id)mutableCopy;
- (void)configureFromSyncVersions:(id)arg1;

@end
