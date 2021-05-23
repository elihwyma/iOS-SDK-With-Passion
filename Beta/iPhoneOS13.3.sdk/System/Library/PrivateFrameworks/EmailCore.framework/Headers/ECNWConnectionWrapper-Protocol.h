/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class NSArray, NSError, NSString;

@protocol ECNWConnectionWrapper <Swift>

@property (nonatomic) unsigned int timeout;
@property (nonatomic) _Bool allowsTrustPrompt;
@property (nonatomic) _Bool usesOpportunisticSockets;
@property (nonatomic) _Bool disableEphemeralDiffieHellmanCiphers;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *networkAccountIdentifier;
@property (copy, nonatomic) NSString *connectionServiceType;
@property (copy, nonatomic, readonly) NSArray *serverCertificates;
@property (copy, nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) NSString *remoteHostname;
@property (nonatomic, readonly) unsigned int remotePortNumber;
@property (nonatomic, readonly) NSString *sourceIPAddressString;
@property (nonatomic, readonly) _Bool isReadable;
@property (nonatomic, readonly) _Bool isWritable;
@property (nonatomic, readonly) _Bool isCellularConnection;
@property (nonatomic, readonly) _Bool isValid;
@property (readonly) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType networkActivityChangeBlock;
@property (copy, nonatomic) CDUnknownBlockType serverTrustHandler;

- (unsigned short)close;
- (unsigned short)writeBytes:length: /* Error: Ran out of types for this method. */;
- (unsigned short)securityProtocol;
- (unsigned short)enableThroughputMonitoring: /* Error: Ran out of types for this method. */;
- (unsigned short)setSecurityProtocol: /* Error: Ran out of types for this method. */;
- (unsigned short)connectToHost:withPort:service: /* Error: Ran out of types for this method. */;
- (unsigned short)readBytesIntoBuffer:maxLength: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForBytesAvailableWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterForBytesAvailable;

@end
