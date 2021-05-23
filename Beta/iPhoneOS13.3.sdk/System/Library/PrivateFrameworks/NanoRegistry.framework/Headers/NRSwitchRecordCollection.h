/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/NRPBSwitchRecordCollection.h>

#import <NanoRegistry/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <Swift>

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)addSwitchRecordWithHistoryEntry:(id)arg1;
- (void)truncateSwitchRecords;
- (id)deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (id)initWithHistoryEntries:(id)arg1;

@end
