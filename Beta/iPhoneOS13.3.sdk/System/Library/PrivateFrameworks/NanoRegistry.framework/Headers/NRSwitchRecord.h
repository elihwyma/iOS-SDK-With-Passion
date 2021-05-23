/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/NRPBSwitchRecord.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface NRSwitchRecord : NRPBSwitchRecord <Swift>

@property (retain, nonatomic) NSUUID *activeDeviceID;
@property (retain, nonatomic) NSDate *date;

+ (_Bool)supportsSecureCoding;
+ (id)switchRecordWithHistoryEntry:(id)arg1;

- (id)initWithDeviceID:(id)arg1 date:(id)arg2 switchIndex:(unsigned int)arg3;

@end
