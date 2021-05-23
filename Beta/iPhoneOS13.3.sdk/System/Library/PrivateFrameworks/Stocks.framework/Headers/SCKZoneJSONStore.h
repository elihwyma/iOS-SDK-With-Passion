/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSArray, NSDate, NSString;

@interface SCKZoneJSONStore : NSObject

{
    NSArray *_serverRecords;
    NSArray *_pendingCommands;
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSString *_zoneName;
}

@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;
@property (copy, nonatomic) NSArray *pendingCommands;

- (void)applyServerRecordsDiff:(id)arg1;
- (void)addPendingCommands:(id)arg1;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
- (id)initWithZoneName:(id)arg1 serverRecords:(id)arg2 lastSyncDate:(id)arg3 lastDirtyDate:(id)arg4 serverChangeToken:(id)arg5 pendingCommands:(id)arg6;

@end
