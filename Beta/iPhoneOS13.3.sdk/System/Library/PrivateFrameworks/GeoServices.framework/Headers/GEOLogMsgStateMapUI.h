/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMultiTabsState;

@interface GEOLogMsgStateMapUI : PBCodable

{
    GEOMultiTabsState *_multiTabsState;
    int _layoutInfo;
    int _layoutStyle;
    _Bool _landscape;
    struct {
        unsigned int has_layoutInfo:1;
        unsigned int has_layoutStyle:1;
        unsigned int has_landscape:1;
    } _flags;
}

@property (nonatomic) _Bool hasLayoutInfo;
@property (nonatomic) int layoutInfo;
@property (nonatomic, readonly) _Bool hasMultiTabsState;
@property (retain, nonatomic) GEOMultiTabsState *multiTabsState;
@property (nonatomic) _Bool hasLayoutStyle;
@property (nonatomic) int layoutStyle;
@property (nonatomic) _Bool hasLandscape;
@property (nonatomic) _Bool landscape;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)layoutInfoAsString:(int)arg1;
- (int)StringAsLayoutInfo:(id)arg1;
- (id)layoutStyleAsString:(int)arg1;
- (int)StringAsLayoutStyle:(id)arg1;

@end
