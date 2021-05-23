/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSData, NSString;

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable

{
    NSString *_manifestHash;
    int _status;
    NSData *_thumbnailImage;
    CDStruct_47fe53f2 _has;
}

@property (nonatomic, readonly) _Bool hasThumbnailImage;
@property (retain, nonatomic) NSData *thumbnailImage;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) _Bool hasManifestHash;
@property (retain, nonatomic) NSString *manifestHash;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;

@end
