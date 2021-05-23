/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <IDSFoundation/IDSBaseMessage.h>

@class NSData, NSMutableArray, NSNumber, NSString;

@interface FTIDSMessage : IDSBaseMessage

{
    NSData *_pushCert;
    struct __SecKey *_identityKey;
    NSData *_identityCert;
    struct __SecKey *_identityPublicKey;
    struct __SecKey *_pushKey;
    struct __SecKey *_pushPublicKey;
    NSData *_pushToken;
    NSString *_selfURI;
    NSMutableArray *_certDataArray;
    NSMutableArray *_publicKeyArray;
    NSMutableArray *_privateKeyArray;
    NSMutableArray *_userIDArray;
    NSNumber *_serverTimestamp;
    NSNumber *_serverTimestampReceivedDate;
}

@property (nonatomic) struct __SecKey *pushPrivateKey;
@property (nonatomic) struct __SecKey *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;
@property (copy, nonatomic) NSString *selfURI;
@property (copy, nonatomic) NSMutableArray *certDataArray;
@property (copy, nonatomic) NSMutableArray *publicKeyArray;
@property (copy, nonatomic) NSMutableArray *privateKeyArray;
@property (copy, nonatomic) NSMutableArray *userIDArray;
@property (nonatomic) struct __SecKey *identityPrivateKey;
@property (nonatomic) struct __SecKey *identityPublicKey;
@property (copy, nonatomic) NSData *IDCertificate;
@property (readonly) _Bool wantsIDSProtocolVersion;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)command;
- (id)serverTimestamp;
- (_Bool)wantsHTTPHeaders;
- (long long)responseCommand;
- (void)setServerTimestamp:(id)arg1;
- (_Bool)wantsBinaryPush;
- (id)retryCountKey;
- (_Bool)wantsIDSServer;
- (_Bool)wantsCompressedBody;
- (_Bool)wantsBagKey;
- (_Bool)wantsSignature;
- (_Bool)wantsBodySignature;
- (id)serverTimestampReceivedDate;
- (void)setServerTimestampReceivedDate:(id)arg1;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)addAuthUserID:(id)arg1 certificate:(id)arg2 privateKey:(struct __SecKey *)arg3 publicKey:(struct __SecKey *)arg4;

@end
