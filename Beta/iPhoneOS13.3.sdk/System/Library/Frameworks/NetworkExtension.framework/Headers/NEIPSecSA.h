/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NWAddressEndpoint;

@interface NEIPSecSA : NSObject

{
    _Bool _natTraversalEnabled;
    _Bool _natDetectedOnPeer;
    _Bool _natKeepaliveEnabled;
    _Bool _natKeepaliveOffloadEnabled;
    _Bool _sequencePerTrafficClass;
    unsigned short _natTraversalPort;
    unsigned short _natTraversalSrcPort;
    unsigned int _spi;
    int _direction;
    int _mode;
    int _protocol;
    unsigned int _replayWindowSize;
    int _encryptionAlgorithm;
    int _authenticationAlgorithm;
    unsigned int _internalSAID;
    NWAddressEndpoint *_localAddress;
    NWAddressEndpoint *_remoteAddress;
    NSString *_boundInterfaceName;
    NSString *_tunnelInterfaceName;
    unsigned long long _lifetimeSeconds;
    NSData *_encryptionKey;
    NSData *_authenticationKey;
    unsigned long long _natKeepaliveIntervalSeconds;
    unsigned long long _natKeepaliveOffloadIntervalSeconds;
}

@property unsigned int internalSAID;
@property unsigned int spi;
@property (readonly) int direction;
@property int mode;
@property int protocol;
@property (retain) NWAddressEndpoint *localAddress;
@property (retain) NWAddressEndpoint *remoteAddress;
@property (retain) NSString *boundInterfaceName;
@property (retain) NSString *tunnelInterfaceName;
@property unsigned int replayWindowSize;
@property unsigned long long lifetimeSeconds;
@property int encryptionAlgorithm;
@property (retain) NSData *encryptionKey;
@property int authenticationAlgorithm;
@property (retain) NSData *authenticationKey;
@property _Bool natTraversalEnabled;
@property _Bool natDetectedOnPeer;
@property _Bool natKeepaliveEnabled;
@property _Bool natKeepaliveOffloadEnabled;
@property unsigned long long natKeepaliveIntervalSeconds;
@property unsigned long long natKeepaliveOffloadIntervalSeconds;
@property unsigned short natTraversalPort;
@property unsigned short natTraversalSrcPort;
@property _Bool sequencePerTrafficClass;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initInboundSA;
- (id)initOutboundSAWithSPI:(unsigned int)arg1;
- (id)createDictionary;

@end
