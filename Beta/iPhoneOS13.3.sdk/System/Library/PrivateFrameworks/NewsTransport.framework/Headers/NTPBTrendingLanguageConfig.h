/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBTrendingLanguageConfig : PBCodable

{
    NSString *_languageTag;
    NSMutableArray *_trendingTopics;
}

@property (nonatomic, readonly) _Bool hasLanguageTag;
@property (retain, nonatomic) NSString *languageTag;
@property (retain, nonatomic) NSMutableArray *trendingTopics;

+ (Class)trendingTopicsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addTrendingTopics:(id)arg1;
- (void)clearTrendingTopics;
- (unsigned long long)trendingTopicsCount;
- (id)trendingTopicsAtIndex:(unsigned long long)arg1;

@end
