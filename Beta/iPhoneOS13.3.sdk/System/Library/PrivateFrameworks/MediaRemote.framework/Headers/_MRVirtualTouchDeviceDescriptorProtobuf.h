/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable

{
    float _screenSizeHeight;
    float _screenSizeWidth;
    _Bool _absolute;
    _Bool _integratedDisplay;
    struct {
        unsigned int screenSizeHeight:1;
        unsigned int screenSizeWidth:1;
        unsigned int absolute:1;
        unsigned int integratedDisplay:1;
    } _has;
}

@property (nonatomic) _Bool hasAbsolute;
@property (nonatomic) _Bool absolute;
@property (nonatomic) _Bool hasIntegratedDisplay;
@property (nonatomic) _Bool integratedDisplay;
@property (nonatomic) _Bool hasScreenSizeWidth;
@property (nonatomic) float screenSizeWidth;
@property (nonatomic) _Bool hasScreenSizeHeight;
@property (nonatomic) float screenSizeHeight;

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
