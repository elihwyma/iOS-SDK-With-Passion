/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NENexusFlow.h>

@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow

{
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow *_flowDivertFlow;
}

@property (retain) NSUUID *clientID;
@property (retain) NWEndpoint *internalEndpoint;
@property (retain) NWParameters *internalParameters;
@property struct _NEFlow *flowDivertFlow;

- (void)dealloc;
- (id)endpoint;
- (id)parameters;
- (id)clientIdentifier;
- (id)initWithFlowDivertFlow:(struct _NEFlow *)arg1;

@end
