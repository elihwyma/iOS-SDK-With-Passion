/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOJunctionViewGuidanceFeedback : PBCodable

{
    NSMutableArray *_imageIDs;
    _Bool _imageDisplayed;
    struct {
        unsigned int has_imageDisplayed:1;
    } _flags;
}

@property (nonatomic) _Bool hasImageDisplayed;
@property (nonatomic) _Bool imageDisplayed;
@property (retain, nonatomic) NSMutableArray *imageIDs;

+ (_Bool)isValid:(id)arg1;
+ (Class)imageIDType;

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
- (void)addImageID:(id)arg1;
- (unsigned long long)imageIDsCount;
- (void)clearImageIDs;
- (id)imageIDAtIndex:(unsigned long long)arg1;

@end
