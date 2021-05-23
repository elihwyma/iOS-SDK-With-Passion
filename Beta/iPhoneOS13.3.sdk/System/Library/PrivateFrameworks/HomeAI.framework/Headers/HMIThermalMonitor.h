/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMIThermalMonitor : HMFObject

{
    struct __IOHIDEventSystemClient *_client;
    NSMutableDictionary *_services;
    HMFUnfairLock *_lock;
}

@property (readonly) NSMutableDictionary *services;
@property (nonatomic, readonly) HMFUnfairLock *lock;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)readValueFromSensor:(int)arg1 value:(double *)arg2;
- (_Bool)readMaxValue:(double *)arg1;

@end
