//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRAVRoutingDiscoverySession, NSArray, NSString;

@interface MRAVEndpointObserver : NSObject
{
    MRAVRoutingDiscoverySession *_discoverySession;
    NSArray *_endpoints;
    id /* CDUnknownBlockType */ _endpointChangedCallback;
    BOOL _didBegin;
    NSString *_outputDeviceUID;
    MRAVEndpoint *_endpoint;
}

@property(readonly, nonatomic) MRAVEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
// - (void).cxx_destruct;
- (id)_endpointContainingOutputDevice:(id)arg1;
- (void)_reevaluateEndpoint;
- (void)_handleOutputContextDidChangeNotification;
- (void)_handleEndpointsDidChange:(id)arg1;
- (id)discoveredEndpoints;
- (void)end;
- (id)_initializeDiscoverySession;
- (void)begin;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endpointChangedCallback;
- (id)initWithOutputDeviceUID:(id)arg1;

@end

