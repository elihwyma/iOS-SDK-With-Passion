/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBRequest.h>

@class NSString;

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest

{
    double _height;
    double _width;
    NSString *_manifestHash;
    NSString *_passIdentifier;
    struct {
        unsigned int height:1;
        unsigned int width:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasPassIdentifier;
@property (retain, nonatomic) NSString *passIdentifier;
@property (nonatomic, readonly) _Bool hasManifestHash;
@property (retain, nonatomic) NSString *manifestHash;
@property (nonatomic) _Bool hasWidth;
@property (nonatomic) double width;
@property (nonatomic) _Bool hasHeight;
@property (nonatomic) double height;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
