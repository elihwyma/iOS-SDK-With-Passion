/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBTocCellExposureArticleElement : PBCodable

{
    long long _publisherArticleVersionInt64;
    NSString *_articleId;
    int _articleType;
    NSString *_sourceChannelId;
    struct {
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) _Bool hasArticleType;
@property (nonatomic) int articleType;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
- (int)StringAsArticleType:(id)arg1;

@end
