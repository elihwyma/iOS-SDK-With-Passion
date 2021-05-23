/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NSString, NWAddressEndpoint, NWEndpoint;

@interface NEIKEv2IKESAConfiguration : NSObject

{
    NSArray *_proposals;
    _Bool _randomizeLocalPort;
    _Bool _serverMode;
    _Bool _allowRedirect;
    _Bool _disableSwitchToNATTPorts;
    _Bool _allowTCPEncapsulation;
    _Bool _useTLSForTCPEncapsulation;
    _Bool _forceUDPEncapsulation;
    unsigned short _tcpEncapsulationPort;
    unsigned int _nonceSize;
    NWEndpoint *_localEndpoint;
    NWEndpoint *_remoteEndpoint;
    NSString *_outgoingInterfaceName;
    NWAddressEndpoint *_redirectedFromServer;
    NSArray *_customIKESAInitPayloads;
    NSArray *_customIKESAInitVendorPayloads;
    NSSet *_extraSupportedSignatureHashes;
}

@property (retain) NWEndpoint *localEndpoint;
@property (retain) NWEndpoint *remoteEndpoint;
@property (retain) NSString *outgoingInterfaceName;
@property _Bool randomizeLocalPort;
@property _Bool serverMode;
@property _Bool allowRedirect;
@property _Bool disableSwitchToNATTPorts;
@property _Bool allowTCPEncapsulation;
@property _Bool useTLSForTCPEncapsulation;
@property _Bool forceUDPEncapsulation;
@property unsigned short tcpEncapsulationPort;
@property unsigned int nonceSize;
@property (retain) NWAddressEndpoint *redirectedFromServer;
@property (copy, nonatomic) NSArray *proposals;
@property (retain) NSArray *customIKESAInitPayloads;
@property (retain) NSArray *customIKESAInitVendorPayloads;
@property (retain) NSSet *extraSupportedSignatureHashes;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
