/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NENexus.h>

@class NEFlowDivertFileHandle, NSData, NSMutableSet, NSObject, NWRemoteConnectionDirector;

@protocol OS_dispatch_queue;

@interface NEFlowNexus : NENexus

{
    _Bool _supportsBrowseRequests;
    unsigned int _flowDivertControlUnit;
    struct _NEFlowDirector *_flowDivertDirector;
    NEFlowDivertFileHandle *_flowDivertControl;
    NSObject<OS_dispatch_queue> *_flowDivertQueue;
    NSData *_flowDivertTokenHMACKey;
    NWRemoteConnectionDirector *_connectionDirector;
    NSMutableSet *_browseAssertions;
}

@property struct _NEFlowDirector *flowDivertDirector;
@property (retain) NEFlowDivertFileHandle *flowDivertControl;
@property (retain) NSObject<OS_dispatch_queue> *flowDivertQueue;
@property unsigned int flowDivertControlUnit;
@property (retain) NSData *flowDivertTokenHMACKey;
@property (retain) NWRemoteConnectionDirector *connectionDirector;
@property (retain) NSMutableSet *browseAssertions;
@property (nonatomic) _Bool supportsBrowseRequests;

- (void)dealloc;
- (_Bool)setDiscoveredEndpoints:(id)arg1 forClient:(id)arg2;
- (void)flowDivertNewFlow:(struct _NEFlow *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)setupFlowDivertDirector;
- (_Bool)setupFlowDivertPolicies;
- (_Bool)installFlowDivertRules;
- (void)handleAssertFromClient:(id)arg1;
- (void)handleUnassertFromClient:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (void)setRemoteConnectionDirector:(id)arg1;
- (void)connectNewFlow:(id)arg1;
- (void)disconnectFlow:(id)arg1;

@end
