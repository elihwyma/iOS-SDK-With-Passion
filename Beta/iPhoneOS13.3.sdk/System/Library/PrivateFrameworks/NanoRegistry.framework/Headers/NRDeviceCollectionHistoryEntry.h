/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection, NRPBDeviceCollectionHistoryEntry, NSDate;

@interface NRDeviceCollectionHistoryEntry : NSObject <Swift>

{
    unsigned int _switchIndex;
    unsigned long long _index;
    NSDate *_date;
    NRDeviceCollectionDiff *_diff;
    NRDeviceCollectionHistory *_historyManager;
}

@property (weak, nonatomic) NRDeviceCollectionHistory *historyManager;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NRDeviceCollectionDiff *diff;
@property (nonatomic) unsigned int switchIndex;
@property (nonatomic, readonly) NRMutableDeviceCollection *state;
@property (nonatomic, readonly) NRPBDeviceCollectionHistoryEntry *protobuf;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned int)arg5;

@end
