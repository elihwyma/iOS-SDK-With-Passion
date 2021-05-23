/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgStateMapRestore : PBCodable

{
    NSMutableArray *_targetLayouts;
}

@property (retain, nonatomic) NSMutableArray *targetLayouts;

+ (_Bool)isValid:(id)arg1;
+ (Class)targetLayoutType;

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
- (void)addTargetLayout:(id)arg1;
- (unsigned long long)targetLayoutsCount;
- (void)clearTargetLayouts;
- (id)targetLayoutAtIndex:(unsigned long long)arg1;

@end
