/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable

{
    NSString *_digitalCardImageUrl;
    NSString *_logoImageUrl;
    NSString *_thumbnailImageUrl;
}

@property (nonatomic, readonly) _Bool hasDigitalCardImageUrl;
@property (retain, nonatomic) NSString *digitalCardImageUrl;
@property (nonatomic, readonly) _Bool hasThumbnailImageUrl;
@property (retain, nonatomic) NSString *thumbnailImageUrl;
@property (nonatomic, readonly) _Bool hasLogoImageUrl;
@property (retain, nonatomic) NSString *logoImageUrl;

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
