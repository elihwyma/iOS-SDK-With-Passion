/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRAVEndpoint, MRAVRoutingDiscoverySession, NSArray, NSString;

@interface MRAVEndpointObserver : NSObject

{
    MRAVRoutingDiscoverySession *_discoverySession;
    NSArray *_endpoints;
    CDUnknownBlockType _endpointChangedCallback;
    _Bool _didBegin;
    NSString *_outputDeviceUID;
    MRAVEndpoint *_endpoint;
}

@property (copy, nonatomic) CDUnknownBlockType endpointChangedCallback;
@property (nonatomic, readonly) NSString *outputDeviceUID;
@property (nonatomic, readonly) MRAVEndpoint *endpoint;

- (void)end;
- (void)begin;
- (id)discoveredEndpoints;
- (id)initWithOutputDeviceUID:(id)arg1;
- (id)_initializeDiscoverySession;
- (void)_handleOutputContextDidChangeNotification;
- (void)_reevaluateEndpoint;
- (void)_handleEndpointsDidChange:(id)arg1;
- (id)_endpointContainingOutputDevice:(id)arg1;

@end
