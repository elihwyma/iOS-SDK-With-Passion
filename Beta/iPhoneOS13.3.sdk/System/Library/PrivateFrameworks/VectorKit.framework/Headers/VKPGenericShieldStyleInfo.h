/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VKPGenericShieldStyleInfo : PBCodable

{
    CDStruct_fae3dc92 _textDropShadowOffsets;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    int _style;
    unsigned int _textColor;
    unsigned int _textDropShadowColor;
    float _textDropShadowSize;
    unsigned int _textStrokeColor;
    float _textStrokeSize;
    struct {
        unsigned int backgroundColor:1;
        unsigned int borderColor:1;
        unsigned int style:1;
        unsigned int textColor:1;
        unsigned int textDropShadowColor:1;
        unsigned int textDropShadowSize:1;
        unsigned int textStrokeColor:1;
        unsigned int textStrokeSize:1;
    } _has;
}

@property (nonatomic) _Bool hasStyle;
@property (nonatomic) int style;
@property (nonatomic) _Bool hasBackgroundColor;
@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) _Bool hasBorderColor;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) _Bool hasTextColor;
@property (nonatomic) unsigned int textColor;
@property (nonatomic) _Bool hasTextStrokeSize;
@property (nonatomic) float textStrokeSize;
@property (nonatomic) _Bool hasTextStrokeColor;
@property (nonatomic) unsigned int textStrokeColor;
@property (nonatomic, readonly) unsigned long long textDropShadowOffsetsCount;
@property (nonatomic, readonly) float *textDropShadowOffsets;
@property (nonatomic) _Bool hasTextDropShadowSize;
@property (nonatomic) float textDropShadowSize;
@property (nonatomic) _Bool hasTextDropShadowColor;
@property (nonatomic) unsigned int textDropShadowColor;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearTextDropShadowOffsets;
- (float)textDropShadowOffsetAtIndex:(unsigned long long)arg1;
- (void)addTextDropShadowOffset:(float)arg1;
- (void)setTextDropShadowOffsets:(float *)arg1 count:(unsigned long long)arg2;

@end
