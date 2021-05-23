/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <Foundation/NSObject.h>

@class CBPeripheralManager, NSString;

__attribute__((visibility("hidden")))
@interface AMSBTLEAdvertisementManager : NSObject

{
    CBPeripheralManager *peripheralManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (_Bool)isAdvertising;
- (_Bool)isLECapableHardware;
- (void)advertiseMIDIService;
- (void)stopAdvertisingMIDIService;

@end
