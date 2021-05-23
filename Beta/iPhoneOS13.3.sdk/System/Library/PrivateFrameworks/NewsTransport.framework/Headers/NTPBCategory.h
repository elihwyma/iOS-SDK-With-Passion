/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBCategory : PBCodable

{
    NSMutableArray *_categoryHierarchys;
    NSMutableArray *_curatedTagIds;
    NSString *_entityId;
    NSString *_name;
    NSMutableArray *_recommendedChannels;
    NSMutableArray *_recommendedTopics;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasEntityId;
@property (retain, nonatomic) NSString *entityId;
@property (retain, nonatomic) NSMutableArray *recommendedTopics;
@property (retain, nonatomic) NSMutableArray *recommendedChannels;
@property (retain, nonatomic) NSMutableArray *categoryHierarchys;
@property (retain, nonatomic) NSMutableArray *curatedTagIds;

+ (Class)recommendedTopicsType;
+ (Class)recommendedChannelsType;
+ (Class)categoryHierarchyType;
+ (Class)curatedTagIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addRecommendedTopics:(id)arg1;
- (void)addRecommendedChannels:(id)arg1;
- (void)addCategoryHierarchy:(id)arg1;
- (void)addCuratedTagIds:(id)arg1;
- (void)clearRecommendedTopics;
- (unsigned long long)recommendedTopicsCount;
- (id)recommendedTopicsAtIndex:(unsigned long long)arg1;
- (void)clearRecommendedChannels;
- (unsigned long long)recommendedChannelsCount;
- (id)recommendedChannelsAtIndex:(unsigned long long)arg1;
- (void)clearCategoryHierarchys;
- (unsigned long long)categoryHierarchysCount;
- (id)categoryHierarchyAtIndex:(unsigned long long)arg1;
- (void)clearCuratedTagIds;
- (unsigned long long)curatedTagIdsCount;
- (id)curatedTagIdsAtIndex:(unsigned long long)arg1;

@end
