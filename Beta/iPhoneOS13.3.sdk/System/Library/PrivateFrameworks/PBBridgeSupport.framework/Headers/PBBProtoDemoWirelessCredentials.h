/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PBBProtoDemoWirelessCredentials : PBCodable

{
    NSString *_password;
    NSString *_ssid;
}

@property (nonatomic, readonly) _Bool hasSsid;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic, readonly) _Bool hasPassword;
@property (retain, nonatomic) NSString *password;

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
