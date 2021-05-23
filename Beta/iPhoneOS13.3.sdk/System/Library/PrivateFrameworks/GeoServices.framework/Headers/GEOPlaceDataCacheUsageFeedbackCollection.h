/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataCacheUsageFeedbackCollection : PBCodable

{
    NSMutableArray *_cacheFeedbacks;
}

@property (retain, nonatomic) NSMutableArray *cacheFeedbacks;

+ (_Bool)isValid:(id)arg1;
+ (Class)cacheFeedbackType;

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
- (void)addCacheFeedback:(id)arg1;
- (unsigned long long)cacheFeedbacksCount;
- (void)clearCacheFeedbacks;
- (id)cacheFeedbackAtIndex:(unsigned long long)arg1;

@end
