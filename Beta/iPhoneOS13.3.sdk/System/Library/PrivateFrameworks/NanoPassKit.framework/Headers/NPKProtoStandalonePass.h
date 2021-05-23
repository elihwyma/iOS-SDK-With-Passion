/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NPKProtoStandalonePass : PBCodable

{
    NSString *_deviceName;
    NSData *_imageData;
    NSString *_localizedDescription;
    NSString *_localizedName;
    NSString *_organizationName;
    int _passType;
    NSString *_passTypeIdentifier;
    NSString *_serialNumber;
    NSMutableArray *_userInfos;
    _Bool _remotePass;
    struct {
        unsigned int passType:1;
        unsigned int remotePass:1;
    } _has;
}

@property (nonatomic) _Bool hasPassType;
@property (nonatomic) int passType;
@property (nonatomic, readonly) _Bool hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic, readonly) _Bool hasPassTypeIdentifier;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (nonatomic, readonly) _Bool hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic, readonly) _Bool hasLocalizedName;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic, readonly) _Bool hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSMutableArray *userInfos;
@property (nonatomic) _Bool hasRemotePass;
@property (nonatomic) _Bool remotePass;
@property (nonatomic, readonly) _Bool hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

+ (Class)userInfosType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)userInfosCount;
- (void)clearUserInfos;
- (void)addUserInfos:(id)arg1;
- (id)userInfosAtIndex:(unsigned long long)arg1;
- (id)passTypeAsString:(int)arg1;
- (int)StringAsPassType:(id)arg1;

@end
