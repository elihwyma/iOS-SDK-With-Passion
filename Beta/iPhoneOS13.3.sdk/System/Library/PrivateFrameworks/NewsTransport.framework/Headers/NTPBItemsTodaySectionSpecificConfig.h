/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBItemsTodaySectionSpecificConfig : PBCodable

{
    unsigned long long _maxArticlesShown;
    NSMutableArray *_items;
    CDStruct_df5cdcef _has;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) _Bool hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)itemsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)arg1;

@end
