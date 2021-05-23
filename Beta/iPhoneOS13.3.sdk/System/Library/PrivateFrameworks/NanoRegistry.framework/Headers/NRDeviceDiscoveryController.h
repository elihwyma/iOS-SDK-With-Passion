/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (nonatomic, readonly) NSArray *devices;

+ (id)sharedInstance;

- (id)init;
- (void)end;
- (void)begin;
- (void)overrideSignalStrengthLimit:(long long)arg1;

@end
