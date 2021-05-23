/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPQueryRetrieveResponse : PBCodable

{
    NSData *_continuationMarker;
    NSMutableArray *_queryResults;
}

@property (retain, nonatomic) NSMutableArray *queryResults;
@property (nonatomic, readonly) _Bool hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)queryResultsType;

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
