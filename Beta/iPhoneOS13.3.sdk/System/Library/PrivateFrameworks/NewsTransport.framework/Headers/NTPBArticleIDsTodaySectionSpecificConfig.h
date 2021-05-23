/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable

{
    NSMutableArray *_articles;
}

@property (retain, nonatomic) NSMutableArray *articles;

+ (Class)articlesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addArticles:(id)arg1;
- (void)clearArticles;
- (unsigned long long)articlesCount;
- (id)articlesAtIndex:(unsigned long long)arg1;

@end
