/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NNMKProtoStandaloneAccountIdentity : PBCodable

{
    NSString *_accountIdentifier;
    NSString *_displayName;
    unsigned int _identityType;
    NSString *_refreshToken;
    NSString *_token;
    NSString *_username;
    struct {
        unsigned int identityType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUsername;
@property (retain, nonatomic) NSString *username;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) NSString *token;
@property (nonatomic, readonly) _Bool hasRefreshToken;
@property (retain, nonatomic) NSString *refreshToken;
@property (nonatomic) _Bool hasIdentityType;
@property (nonatomic) unsigned int identityType;
@property (nonatomic, readonly) _Bool hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
