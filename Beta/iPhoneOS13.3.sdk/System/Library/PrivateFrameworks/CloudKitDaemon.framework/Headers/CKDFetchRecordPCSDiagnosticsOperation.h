/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation

{
    NSArray *_zoneIDs;
    NSMutableArray *_fetchedZones;
    NSMutableArray *_mutableCorruptRecords;
}

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableArray *fetchedZones;
@property (retain, nonatomic) NSMutableArray *mutableCorruptRecords;
@property (nonatomic, readonly) NSArray *corruptRecords;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_fetchZones;
- (void)_checkRecordPCSForAllZones;

@end
