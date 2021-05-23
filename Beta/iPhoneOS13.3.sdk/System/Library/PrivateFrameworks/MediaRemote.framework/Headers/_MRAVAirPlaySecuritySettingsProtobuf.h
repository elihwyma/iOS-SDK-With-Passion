/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable

{
    NSString *_password;
    int _securityType;
    struct {
        unsigned int securityType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasPassword;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) _Bool hasSecurityType;
@property (nonatomic) int securityType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)securityTypeAsString:(int)arg1;
- (int)StringAsSecurityType:(id)arg1;

@end
