/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable

{
    NSMutableArray *_visibleViews;
}

@property (retain, nonatomic) NSMutableArray *visibleViews;

+ (Class)visibleViewsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addVisibleViews:(id)arg1;
- (void)clearVisibleViews;
- (unsigned long long)visibleViewsCount;
- (id)visibleViewsAtIndex:(unsigned long long)arg1;

@end
