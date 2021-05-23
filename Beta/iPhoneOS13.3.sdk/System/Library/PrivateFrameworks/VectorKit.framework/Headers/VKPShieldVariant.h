/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldVariant : PBCodable

{
    CDStruct_79d0722e _textShadow;
    CDStruct_033e8ed6 *_layers;
    unsigned long long _layersCount;
    unsigned long long _layersSpace;
    CDStruct_f43f0670 _textStroke;
    CDStruct_58ec0031 _fontColor;
    CDStruct_58ec0031 _nonDigitFontColor;
    CDStruct_fae3dc92 _centerPoints;
    unsigned int _atlasIndex;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    float _capWidthLeft;
    float _capWidthRight;
    float _centerOffsetX;
    NSString *_fontName;
    float _fontSize;
    float _lineSpacing;
    unsigned int _maxDigits;
    unsigned int _minDigits;
    NSString *_nonDigitFontName;
    float _nonDigitFontSize;
    float _paddingLeft;
    float _paddingRight;
    unsigned int _quadIndex;
    float _textBaseline;
    int _textMaskColor;
    struct {
        unsigned int textShadow:1;
        unsigned int textStroke:1;
        unsigned int fontColor:1;
        unsigned int nonDigitFontColor:1;
        unsigned int atlasIndex:1;
        unsigned int backgroundColor:1;
        unsigned int borderColor:1;
        unsigned int capWidthLeft:1;
        unsigned int capWidthRight:1;
        unsigned int centerOffsetX:1;
        unsigned int fontSize:1;
        unsigned int lineSpacing:1;
        unsigned int maxDigits:1;
        unsigned int minDigits:1;
        unsigned int nonDigitFontSize:1;
        unsigned int paddingLeft:1;
        unsigned int paddingRight:1;
        unsigned int quadIndex:1;
        unsigned int textBaseline:1;
        unsigned int textMaskColor:1;
    } _has;
}

@property (nonatomic) _Bool hasAtlasIndex;
@property (nonatomic) unsigned int atlasIndex;
@property (nonatomic) _Bool hasQuadIndex;
@property (nonatomic) unsigned int quadIndex;
@property (nonatomic) _Bool hasMinDigits;
@property (nonatomic) unsigned int minDigits;
@property (nonatomic) _Bool hasMaxDigits;
@property (nonatomic) unsigned int maxDigits;
@property (nonatomic) _Bool hasTextBaseline;
@property (nonatomic) float textBaseline;
@property (nonatomic) _Bool hasCenterOffsetX;
@property (nonatomic) float centerOffsetX;
@property (nonatomic, readonly) _Bool hasFontName;
@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) _Bool hasFontSize;
@property (nonatomic) float fontSize;
@property (nonatomic) _Bool hasFontColor;
@property (nonatomic) CDStruct_58ec0031 fontColor;
@property (nonatomic) _Bool hasTextStroke;
@property (nonatomic) CDStruct_f43f0670 textStroke;
@property (nonatomic) _Bool hasTextShadow;
@property (nonatomic) CDStruct_79d0722e textShadow;
@property (nonatomic, readonly) _Bool hasNonDigitFontName;
@property (retain, nonatomic) NSString *nonDigitFontName;
@property (nonatomic) _Bool hasNonDigitFontSize;
@property (nonatomic) float nonDigitFontSize;
@property (nonatomic, readonly) unsigned long long centerPointsCount;
@property (nonatomic, readonly) float *centerPoints;
@property (nonatomic, readonly) unsigned long long layersCount;
@property (nonatomic, readonly) CDStruct_033e8ed6 *layers;
@property (nonatomic) _Bool hasBackgroundColor;
@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) _Bool hasBorderColor;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) _Bool hasCapWidthLeft;
@property (nonatomic) float capWidthLeft;
@property (nonatomic) _Bool hasCapWidthRight;
@property (nonatomic) float capWidthRight;
@property (nonatomic) _Bool hasPaddingLeft;
@property (nonatomic) float paddingLeft;
@property (nonatomic) _Bool hasPaddingRight;
@property (nonatomic) float paddingRight;
@property (nonatomic) _Bool hasTextMaskColor;
@property (nonatomic) int textMaskColor;
@property (nonatomic) _Bool hasLineSpacing;
@property (nonatomic) float lineSpacing;
@property (nonatomic) _Bool hasNonDigitFontColor;
@property (nonatomic) CDStruct_58ec0031 nonDigitFontColor;

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
- (void)clearLayers;
- (CDStruct_033e8ed6)layerAtIndex:(unsigned long long)arg1;
- (void)addLayer:(CDStruct_033e8ed6)arg1;
- (void)clearCenterPoints;
- (float)centerPointAtIndex:(unsigned long long)arg1;
- (void)addCenterPoint:(float)arg1;
- (void)setCenterPoints:(float *)arg1 count:(unsigned long long)arg2;
- (void)setLayers:(CDStruct_033e8ed6 *)arg1 count:(unsigned long long)arg2;

@end
