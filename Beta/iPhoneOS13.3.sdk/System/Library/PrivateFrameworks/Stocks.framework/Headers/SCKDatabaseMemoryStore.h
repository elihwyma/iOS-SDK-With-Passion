/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSDate, NSMutableDictionary;

@interface SCKDatabaseMemoryStore : NSObject

{
    _Bool _cloudBackupEnabled;
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSMutableDictionary *_zoneStoresByName;
}

@property (copy, nonatomic) NSMutableDictionary *zoneStoresByName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic, getter=isCloudBackupEnabled) _Bool cloudBackupEnabled;

- (id)init;
- (id)zoneStoreForSchema:(id)arg1;

@end
