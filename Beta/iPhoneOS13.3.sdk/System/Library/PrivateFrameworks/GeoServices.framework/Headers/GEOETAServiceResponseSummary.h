/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOETAServiceResponseSummary : PBCodable

{
    struct GEOSessionID _responseUuid;
    NSMutableArray *_routeInfos;
    int _status;
    _Bool _resultsApplied;
    struct {
        unsigned int has_responseUuid:1;
        unsigned int has_status:1;
        unsigned int has_resultsApplied:1;
    } _flags;
}

@property (nonatomic) _Bool hasResultsApplied;
@property (nonatomic) _Bool resultsApplied;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasResponseUuid;
@property (nonatomic) struct GEOSessionID responseUuid;
@property (retain, nonatomic) NSMutableArray *routeInfos;

+ (_Bool)isValid:(id)arg1;
+ (Class)routeInfoType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addRouteInfo:(id)arg1;
- (unsigned long long)routeInfosCount;
- (void)clearRouteInfos;
- (id)routeInfoAtIndex:(unsigned long long)arg1;

@end
