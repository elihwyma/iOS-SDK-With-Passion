/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSData, NSString;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <Swift>

{
    double _expirationTimeInterval;
    unsigned long long _sessionID;
    NSString *_storefrontIdentifier;
    NSData *_token;
    struct {
        unsigned int expirationTimeInterval:1;
        unsigned int sessionID:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) NSData *token;
@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) _Bool hasExpirationTimeInterval;
@property (nonatomic) double expirationTimeInterval;
@property (nonatomic, readonly) _Bool hasStorefrontIdentifier;
@property (retain, nonatomic) NSString *storefrontIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
