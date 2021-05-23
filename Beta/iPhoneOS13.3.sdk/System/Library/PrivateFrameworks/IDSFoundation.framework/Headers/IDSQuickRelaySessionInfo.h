/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, NSUUID;

@interface IDSQuickRelaySessionInfo : NSObject

{
    long long _allocateType;
    double _allocateTime;
    NSString *_allocateRequestID;
    NSString *_idsSessionID;
    NSString *_relaySessionID;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    NSData *_softwareData;
    unsigned char _protocolVersion;
    long long _relayServerProviderType;
    long long _participantID;
    NSArray *_allParticipantIDs;
    _Bool _isInitiator;
    long long _linkProtocol;
    struct sockaddr_storage _serverAddress;
    struct sockaddr_storage _serverAddressIPv6;
    NSString *_groupID;
    NSString *_stableGroupID;
    NSUUID *_defaultDeviceLocalCBUUID;
    NSUUID *_defaultDeviceRemoteCBUUID;
    NSArray *_publishedStreams;
    NSArray *_subscribedStreams;
    unsigned int _generationCounter;
    unsigned char _maxConcurrentStreams;
}

@property (readonly) long long allocateType;
@property (readonly) double allocateTime;
@property (readonly) NSString *allocateRequestID;
@property (readonly) NSString *idsSessionID;
@property (readonly) NSString *relaySessionID;
@property (readonly) NSData *relaySessionToken;
@property (readonly) NSData *relaySessionKey;
@property (readonly) NSData *softwareData;
@property (readonly) unsigned char protocolVersion;
@property (readonly) long long relayServerProviderType;
@property (readonly) long long participantID;
@property (readonly) NSArray *allParticipantIDs;
@property (readonly) _Bool isInitiator;
@property (readonly) long long linkProtocol;
@property (readonly) const struct sockaddr_storage *serverAddress;
@property (readonly) const struct sockaddr_storage *serverAddressIPv6;
@property (readonly) NSUUID *defaultDeviceLocalCBUUID;
@property (readonly) NSUUID *defaultDeviceRemoteCBUUID;
@property (readonly) NSString *groupID;
@property (readonly) NSString *stableGroupID;
@property (readonly) NSArray *publishedStreams;
@property (readonly) NSArray *subscribedStreams;
@property (readonly) unsigned int generationCounter;
@property (readonly) unsigned char maxConcurrentStreams;

- (long long)parseSessionInfo:(id)arg1;

@end
