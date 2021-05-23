/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class NSData, NSMutableArray;

@interface FCCKPQueryRetrieveResponse : PBCodable <Swift>

{
    NSData *_continuationMarker;
    NSMutableArray *_queryResults;
}

@property (retain, nonatomic) NSMutableArray *queryResults;
@property (nonatomic, readonly) _Bool hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

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
- (void)addQueryResults:(id)arg1;
- (unsigned long long)queryResultsCount;
- (void)clearQueryResults;
- (id)queryResultsAtIndex:(unsigned long long)arg1;

@end
