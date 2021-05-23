/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MFConnectionSettings : NSObject

{
    NSString *_hostname;
    NSString *_serviceName;
    NSString *_certUIService;
    NSArray *_clientCertificates;
    unsigned int _portNumber;
    struct __CFString *_connectionServiceType;
    _Bool _usesSSL;
    _Bool _usesOpportunisticSockets;
    _Bool _tryDirectSSLConnection;
    _Bool _allowsTrustPrompt;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_accountIdentifier;
    NSString *_networkAccountIdentifier;
}

@property (copy, nonatomic) NSString *certUIService;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *networkAccountIdentifier;
@property (nonatomic) unsigned int portNumber;
@property (nonatomic) _Bool usesSSL;
@property (nonatomic) _Bool usesOpportunisticSockets;
@property (nonatomic) _Bool tryDirectSSL;
@property (nonatomic) _Bool allowsTrustPrompt;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CFString *)connectionServiceType;
- (void)setConnectionServiceType:(struct __CFString *)arg1;

@end
