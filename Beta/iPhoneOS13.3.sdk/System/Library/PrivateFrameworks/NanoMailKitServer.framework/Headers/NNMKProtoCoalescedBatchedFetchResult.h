/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NNMKProtoCoalescedBatchedFetchResult : PBCodable

{
    NSMutableArray *_fetchResults;
}

@property (retain, nonatomic) NSMutableArray *fetchResults;

+ (Class)fetchResultsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFetchResults:(id)arg1;
- (unsigned long long)fetchResultsCount;
- (void)clearFetchResults;
- (id)fetchResultsAtIndex:(unsigned long long)arg1;

@end
