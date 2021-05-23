/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDZoneGatekeeper : NSObject

{
    NSMutableDictionary *_zoneIDsToGateHolders;
    NSMutableArray *_waiterWrappers;
}

@property (retain, nonatomic) NSMutableDictionary *zoneIDsToGateHolders;
@property (retain, nonatomic) NSMutableArray *waiterWrappers;

- (id)init;
- (id)CKStatusReportArray;
- (_Bool)hasStatusToReport;
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)relinquishLocksForWaiter:(id)arg1;

@end
