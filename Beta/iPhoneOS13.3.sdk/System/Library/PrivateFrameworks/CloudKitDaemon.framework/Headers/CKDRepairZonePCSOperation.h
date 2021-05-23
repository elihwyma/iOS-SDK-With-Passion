/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDRepairZonePCSOperation : CKDDatabaseOperation

{
    CDUnknownBlockType _zonePCSRepairProgressBlock;
    NSArray *_zoneIDs;
    NSMutableArray *_fetchedZones;
    NSMutableArray *_fixedZones;
    NSMutableDictionary *_pcsInfoByZoneID;
}

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableArray *fetchedZones;
@property (retain, nonatomic) NSMutableArray *fixedZones;
@property (retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID;
@property (copy, nonatomic) CDUnknownBlockType zonePCSRepairProgressBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_fetchZones;
- (void)_checkZonePCS;
- (void)_uploadRepairedZones;
- (id)_checkPCSDataForZone:(id)arg1;

@end
