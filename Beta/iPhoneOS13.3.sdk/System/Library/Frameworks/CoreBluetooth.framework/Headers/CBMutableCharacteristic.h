/*
 Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <CoreBluetooth/CBCharacteristic.h>

@class NSArray, NSData, NSMutableArray, NSNumber;

@interface CBMutableCharacteristic : CBCharacteristic

{
    NSMutableArray *_subscribedCentrals;
    unsigned long long _permissions;
    NSNumber *_ID;
}

@property (retain) NSNumber *ID;
@property (nonatomic) unsigned long long permissions;
@property (retain, readonly) NSArray *subscribedCentrals;
@property (nonatomic) unsigned long long properties;
@property (retain) NSData *value;
@property (retain) NSArray *descriptors;

- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (id)initWithType:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 permissions:(unsigned long long)arg4;
- (_Bool)handleCentralSubscribed:(id)arg1;
- (_Bool)handleCentralUnsubscribed:(id)arg1;
- (void)handlePowerNotOn;

@end
