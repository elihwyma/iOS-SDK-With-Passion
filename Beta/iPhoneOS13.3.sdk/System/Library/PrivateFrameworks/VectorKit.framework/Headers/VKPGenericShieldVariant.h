/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPGenericShieldVariant : PBCodable

{
    CDStruct_e9f6a06b *_layers;
    unsigned long long _layersCount;
    unsigned long long _layersSpace;
    NSString *_fontName;
    float _fontSize;
    float _leftCapWidth;
    float _leftPadding;
    float _lineSpacing;
    unsigned int _numberOfLines;
    float _rightCapWidth;
    float _rightPadding;
    float _textBaseline;
    struct {
        unsigned int fontSize:1;
        unsigned int leftCapWidth:1;
        unsigned int leftPadding:1;
        unsigned int lineSpacing:1;
        unsigned int numberOfLines:1;
        unsigned int rightCapWidth:1;
        unsigned int rightPadding:1;
        unsigned int textBaseline:1;
    } _has;
}

@property (nonatomic) _Bool hasNumberOfLines;
@property (nonatomic) unsigned int numberOfLines;
@property (nonatomic, readonly) unsigned long long layersCount;
@property (nonatomic, readonly) CDStruct_e9f6a06b *layers;
@property (nonatomic) _Bool hasTextBaseline;
@property (nonatomic) float textBaseline;
@property (nonatomic, readonly) _Bool hasFontName;
@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) _Bool hasFontSize;
@property (nonatomic) float fontSize;
@property (nonatomic) _Bool hasLeftCapWidth;
@property (nonatomic) float leftCapWidth;
@property (nonatomic) _Bool hasRightCapWidth;
@property (nonatomic) float rightCapWidth;
@property (nonatomic) _Bool hasLineSpacing;
@property (nonatomic) float lineSpacing;
@property (nonatomic) _Bool hasLeftPadding;
@property (nonatomic) float leftPadding;
@property (nonatomic) _Bool hasRightPadding;
@property (nonatomic) float rightPadding;

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
- (CDStruct_e9f6a06b)layerAtIndex:(unsigned long long)arg1;
- (void)addLayer:(CDStruct_e9f6a06b)arg1;
- (void)setLayers:(CDStruct_e9f6a06b *)arg1 count:(unsigned long long)arg2;

@end
