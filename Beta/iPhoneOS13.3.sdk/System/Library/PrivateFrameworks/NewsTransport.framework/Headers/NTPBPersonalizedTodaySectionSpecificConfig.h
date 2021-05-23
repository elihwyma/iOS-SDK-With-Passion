/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable

{
    unsigned long long _maxArticlesShown;
    NSMutableArray *_mandatoryArticles;
    NSMutableArray *_personalizedArticles;
    CDStruct_df5cdcef _has;
}

@property (retain, nonatomic) NSMutableArray *mandatoryArticles;
@property (retain, nonatomic) NSMutableArray *personalizedArticles;
@property (nonatomic) _Bool hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)mandatoryArticlesType;
+ (Class)personalizedArticlesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addMandatoryArticles:(id)arg1;
- (void)addPersonalizedArticles:(id)arg1;
- (void)clearMandatoryArticles;
- (unsigned long long)mandatoryArticlesCount;
- (id)mandatoryArticlesAtIndex:(unsigned long long)arg1;
- (void)clearPersonalizedArticles;
- (unsigned long long)personalizedArticlesCount;
- (id)personalizedArticlesAtIndex:(unsigned long long)arg1;

@end
