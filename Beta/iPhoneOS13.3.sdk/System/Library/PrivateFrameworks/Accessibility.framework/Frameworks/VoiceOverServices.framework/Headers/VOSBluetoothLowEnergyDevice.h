/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class CBCentralManager, CBPeripheral, NSString;

@interface VOSBluetoothLowEnergyDevice : NSObject

{
    CBPeripheral *_peripheral;
    CBCentralManager *_centralManager;
}

@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, readonly) CBCentralManager *centralManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)name;
- (long long)compare:(id)arg1;
- (id)identifier;
- (void)disconnect;
- (void)connect;
- (_Bool)connected;
- (_Bool)paired;
- (void)unpair;
- (id)initWithPeripheral:(id)arg1 manager:(id)arg2;

@end
