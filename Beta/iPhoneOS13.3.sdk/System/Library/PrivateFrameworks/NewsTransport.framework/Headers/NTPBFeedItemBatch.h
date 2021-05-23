/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBFeedItemBatch : PBCodable

{
    NSMutableArray *_feedItems;
}

@property (retain, nonatomic) NSMutableArray *feedItems;

+ (Class)feedItemsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addFeedItems:(id)arg1;
- (void)clearFeedItems;
- (unsigned long long)feedItemsCount;
- (id)feedItemsAtIndex:(unsigned long long)arg1;

@end
