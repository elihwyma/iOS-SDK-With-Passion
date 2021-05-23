/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFStream, NSArray, NSCondition, NSData, NSInvocation, NSString;

@interface _MFSocket : NSObject

{
    NSCondition *_condition;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    struct __CFString *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSArray *_clientCertificates;
    int _lowThroughputCounter;
    int _numTimeoutSecs;
    _Bool _allowsTrustPrompt;
    _Bool _usesOpportunisticSockets;
    _Bool _socketCanRead;
    _Bool _socketCanWrite;
    _Bool _disableEphemeralDiffieHellmanCiphers;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_accountIdentifier;
    NSString *_networkAccountIdentifier;
    MFStream *_stream;
}

@property (retain) MFStream *stream;
@property (nonatomic) int timeout;
@property (nonatomic) _Bool allowsTrustPrompt;
@property (nonatomic) _Bool usesOpportunisticSockets;
@property (nonatomic) _Bool disableEphemeralDiffieHellmanCiphers;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *networkAccountIdentifier;
@property (nonatomic, readonly) NSArray *serverCertificates;
@property (nonatomic, readonly) NSString *remoteHostname;
@property (nonatomic, readonly) unsigned int remotePortNumber;
@property (nonatomic, readonly) NSData *sourceIPAddress;
@property (nonatomic, readonly) _Bool isReadable;
@property (nonatomic, readonly) _Bool isWritable;
@property (nonatomic, readonly) _Bool isCellularConnection;
@property (nonatomic, readonly) _Bool isValid;

- (id)init;
- (void)dealloc;
- (void)abort;
- (void)setEventHandler:(id)arg1;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)setConnectionServiceType:(struct __CFString *)arg1;
- (id)securityProtocol;
- (void)enableThroughputMonitoring:(_Bool)arg1;
- (_Bool)setSecurityProtocol:(id)arg1;
- (_Bool)_evaluateTrust:(struct __SecTrust *)arg1 errorPtr:(id *)arg2;
- (_Bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (_Bool)_certificateIsTrustedForAccount:(id)arg1;
- (void)_setCertificateIsTrusted:(_Bool)arg1 forAccount:(id)arg2;
- (_Bool)_waitForSocketOpenAndFlag:(_Bool *)arg1;
- (id)_negotiatedProtocolVersion;
- (_Bool)_startSSLHandshakeWithProtocol:(id)arg1 errorPtr:(id *)arg2;
- (unsigned int)_bufferedByteCount;
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;

@end
