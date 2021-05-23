/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol OS_dispatch_queue;

@interface MRAVRoutingDiscoverySession : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct NSMutableDictionary *_endpointsChangedCallbacks;
    struct NSMutableDictionary *_outputDevicesChangedCallbacks;
    _Bool _alwaysAllowUpdates;
}

@property (nonatomic, readonly) unsigned int endpointFeatures;
@property (nonatomic, readonly) _Bool devicePresenceDetected;
@property (nonatomic, readonly) NSArray *availableEndpoints;
@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic) unsigned int discoveryMode;
@property (nonatomic) _Bool alwaysAllowUpdates;
@property (nonatomic) unsigned int targetAudioSessionID;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic, readonly) NSArray *endpointsChangedCallbacks;
@property (nonatomic, readonly) NSArray *outputDevicesChangedCallbacks;

+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1 enableThrottling:(_Bool)arg2;

- (id)_init;
- (id)addEndpointsChangedCallback:(CDUnknownBlockType)arg1;
- (id)addOutputDevicesChangedCallback:(CDUnknownBlockType)arg1;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (void)removeOutputDevicesChangedCallback:(id)arg1;

@end
