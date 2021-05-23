/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODirectionsCollectionRequest : PBRequest

{
    NSMutableArray *_requestElements;
}

@property (retain, nonatomic) NSMutableArray *requestElements;

+ (_Bool)isValid:(id)arg1;
+ (Class)requestElementsType;

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
- (void)readAll:(_Bool)arg1;
- (void)addRequestElements:(id)arg1;
- (unsigned long long)requestElementsCount;
- (void)clearRequestElements;
- (id)requestElementsAtIndex:(unsigned long long)arg1;

@end
