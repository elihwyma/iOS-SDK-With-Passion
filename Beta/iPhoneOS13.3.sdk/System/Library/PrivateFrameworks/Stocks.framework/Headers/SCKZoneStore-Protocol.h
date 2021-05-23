/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class CKServerChangeToken, NSArray, NSDate;

@protocol SCKZoneStore

@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;
@property (copy, nonatomic) NSArray *pendingCommands;

- (unsigned short)applyServerRecordsDiff: /* Error: Ran out of types for this method. */;
- (unsigned short)addPendingCommands: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPendingCommandsUpToCount: /* Error: Ran out of types for this method. */;

@end
