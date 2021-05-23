/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AFPairedBluetoothDevicesObserver : NSObject

{
    NSArray *_pairedDevices;
    struct os_unfair_lock_s _pairedDevicesLock;
}

+ (id)sharedObserver;

- (id)init;
- (void)updatePairedDevices:(id)arg1;
- (id)pairedBluetoothDevices;

@end
