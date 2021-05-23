/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NTPBTodaySectionConfigArticle, NTPBTodaySectionConfigWebEmbed;

@interface NTPBTodaySectionConfigItem : PBCodable

{
    NTPBTodaySectionConfigArticle *_article;
    int _itemType;
    NTPBTodaySectionConfigWebEmbed *_webEmbed;
    struct {
        unsigned int itemType:1;
    } _has;
}

@property (nonatomic) _Bool hasItemType;
@property (nonatomic) int itemType;
@property (nonatomic, readonly) _Bool hasArticle;
@property (retain, nonatomic) NTPBTodaySectionConfigArticle *article;
@property (nonatomic, readonly) _Bool hasWebEmbed;
@property (retain, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
