/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSData, NSUUID;

@interface _IDSDataChannelLinkContext : NSObject

{
    BOOL _linkID;
    unsigned char _networkType;
    long long _connectionType;
    unsigned int _RATType;
    unsigned short _maxMTU;
    unsigned char _remoteNetworkType;
    long long _remoteConnectionType;
    unsigned int _remoteRATType;
    unsigned int _maxBitrate;
    NSUUID *_linkUUID;
    NSUUID *_QRSessionID;
    long long _relayServerProvider;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    _Bool _serverIsDegraded;
    unsigned short _localLinkFlags;
    unsigned short _remoteLinkFlags;
}

- (id)description;

@end
