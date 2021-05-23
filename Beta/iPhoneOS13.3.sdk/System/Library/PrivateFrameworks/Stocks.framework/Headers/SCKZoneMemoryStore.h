/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSArray, NSDate;

@interface SCKZoneMemoryStore : NSObject

{
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSArray *_serverRecords;
    NSArray *_pendingCommands;
}

@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;
@property (copy, nonatomic) NSArray *pendingCommands;

- (id)init;
- (void)applyServerRecordsDiff:(id)arg1;
- (void)addPendingCommands:(id)arg1;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;

@end
