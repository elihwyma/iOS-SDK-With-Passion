/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class CKServerChangeToken, NSDate;

@protocol SCKDatabaseStore

@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic, getter=isCloudBackupEnabled) _Bool cloudBackupEnabled;

- (unsigned short)zoneStoreForSchema: /* Error: Ran out of types for this method. */;

@end
