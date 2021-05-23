/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@protocol OS_dispatch_source;

@interface NEIKEv2Server : NSObject <Swift>

{
    unsigned int _redirects;
    NSString *_serverAddress;
    NSMutableArray *_resolvedAddresses;
    NSString *_redirectedAddress;
    NSMutableArray *_resolvedRedirectedAddresses;
    NSString *_redirectedFromAddress;
    NSArray *_additionalIPv4ServerAddresses;
    NSArray *_additionalIPv6ServerAddresses;
    NSObject<OS_dispatch_source> *_redirectTimer;
    unsigned long long _nextCount;
}

@property unsigned int redirects;
@property (retain) NSObject<OS_dispatch_source> *redirectTimer;
@property unsigned long long nextCount;
@property (retain) NSString *serverAddress;
@property (retain) NSMutableArray *resolvedAddresses;
@property (retain) NSString *redirectedAddress;
@property (retain) NSMutableArray *resolvedRedirectedAddresses;
@property (retain) NSString *redirectedFromAddress;
@property (retain) NSArray *additionalIPv4ServerAddresses;
@property (retain) NSArray *additionalIPv6ServerAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getSynthesizedIPv6Address:(id)arg1 outgoingIf:(unsigned long long)arg2 nat64Prefixes:(CDStruct_c3d3b44c *)arg3 numNat64Prefixes:(int)arg4;

- (void)dealloc;
- (id)getViableServerAddressForPath:(id)arg1;
- (id)getServerOrRedirectedAddress;
- (void)setServerOrRedirectedResolvedAddress:(id)arg1 defaultPath:(id)arg2;
- (_Bool)startRedirectTimer;
- (_Bool)checkRedirectCount;
- (id)chooseNextServerOrRedirectedResolvedAddress;
- (id)normalizeServerAddress:(id)arg1 defaultPath:(id)arg2;
- (void)stopRedirectTimer;

@end
