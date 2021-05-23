/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class MCPeerID, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MCSessionPeerState : NSObject

{
    _Bool _connectPeerCalled;
    unsigned int _newStreamOpenRequestID;
    unsigned int _newStreamID;
    MCPeerID *_peerID;
    long long _state;
    NSMutableDictionary *_outgoingStreamRequests;
    NSMutableDictionary *_incomingStreams;
    NSMutableDictionary *_outgoingStreams;
    NSData *_nearbyConnectionData;
    long long _certificateDecision;
}

@property (copy, nonatomic, readonly) MCPeerID *peerID;
@property (nonatomic) long long state;
@property (nonatomic) _Bool connectPeerCalled;
@property (copy, nonatomic) NSData *nearbyConnectionData;
@property (retain, nonatomic) NSMutableDictionary *outgoingStreamRequests;
@property (retain, nonatomic) NSMutableDictionary *outgoingStreams;
@property (retain, nonatomic) NSMutableDictionary *incomingStreams;
@property (nonatomic, readonly) unsigned int newStreamOpenRequestID;
@property (nonatomic, readonly) unsigned int newStreamID;
@property (nonatomic) long long certificateDecision;

- (void)dealloc;
- (id)description;
- (id)initWithPeer:(id)arg1;

@end
