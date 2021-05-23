/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol TVRCDeviceQueryDelegate;

@interface TVRCDeviceQuery : NSObject

{
    id <TVRCDeviceQueryDelegate> _delegate;
}

@property (weak, nonatomic) id <TVRCDeviceQueryDelegate> delegate;
@property (copy, nonatomic, readonly) NSSet *devices;

+ (void)fetchActiveEndpointUIDWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_allDiscoveredDevices;
+ (void)_allDiscoveredDevicesDidUpdate:(id)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;

@end
