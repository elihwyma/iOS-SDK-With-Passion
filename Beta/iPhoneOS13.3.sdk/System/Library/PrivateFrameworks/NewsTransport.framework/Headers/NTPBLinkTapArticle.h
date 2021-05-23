/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBLinkTapArticle : PBCodable

{
    NSString *_articleId;
    int _articleType;
    NSString *_linkUrl;
    NSString *_referencedArticleId;
    struct {
        unsigned int articleType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLinkUrl;
@property (retain, nonatomic) NSString *linkUrl;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) _Bool hasArticleType;
@property (nonatomic) int articleType;

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
