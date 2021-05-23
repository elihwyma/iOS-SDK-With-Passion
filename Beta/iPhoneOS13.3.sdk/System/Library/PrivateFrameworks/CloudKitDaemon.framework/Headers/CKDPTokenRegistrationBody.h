/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPTokenRegistrationBody : PBCodable

{
    int _apnsEnv;
    NSString *_bundleIdentifier;
    NSData *_token;
    struct {
        unsigned int apnsEnv:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) NSData *token;
@property (nonatomic, readonly) _Bool hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) _Bool hasApnsEnv;
@property (nonatomic) int apnsEnv;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)apnsEnvAsString:(int)arg1;
- (int)StringAsApnsEnv:(id)arg1;

@end
