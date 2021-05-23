/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource

{
    void *_discoverySession;
    void *_callbackToken;
    NSString *_routingContextUID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_endpoints;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *endpoints;
@property (copy, nonatomic) NSString *routingContextUID;

- (id)init;
- (void)dealloc;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (_Bool)devicePresenceDetected;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithThrottlingEnabled:(_Bool)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_endpointsDidChange:(id)arg1;

@end
