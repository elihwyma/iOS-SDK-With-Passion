/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class CBPeripheral, NSData, NSMapTable, NSMutableDictionary, NSNumber, NSString;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject

{
    _Bool _notifyingCharacteristicUpdated;
    _Bool _monitorState;
    double _lastSeen;
    CBPeripheral *_peripheral;
    NSNumber *_statusFlags;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_categoryIdentifier;
    NSString *_identifier;
    NSData *_setupHash;
    unsigned long long _advertisementFormat;
    NSMutableDictionary *_cachedDescriptors;
    NSMapTable *_cachedCharacteristicSignatures;
    NSMapTable *_cachedServiceSignatures;
    unsigned long long _connectionPriority;
}

@property (nonatomic, readonly) double lastSeen;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) NSNumber *statusFlags;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSNumber *configNumber;
@property (retain, nonatomic) NSNumber *categoryIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic) unsigned long long advertisementFormat;
@property (nonatomic) _Bool notifyingCharacteristicUpdated;
@property (nonatomic, readonly) NSMutableDictionary *cachedDescriptors;
@property (nonatomic, readonly) NSMapTable *cachedCharacteristicSignatures;
@property (nonatomic, readonly) NSMapTable *cachedServiceSignatures;
@property (nonatomic) _Bool monitorState;
@property (nonatomic) unsigned long long connectionPriority;

- (id)description;
- (id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6 advertisementFormat:(unsigned long long)arg7 setupHash:(id)arg8;
- (void)updatePairedPeripheralConfiguration:(_Bool)arg1 connectionPriority:(unsigned long long)arg2;

@end
