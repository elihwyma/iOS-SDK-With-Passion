/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBArticleViewNotw : PBCodable

{
    NSString *_articleId;
    int _articleViewType;
    float _maxScrollDepth;
    NSString *_referringSite;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    NSString *_windowId;
    struct {
        unsigned int articleViewType:1;
        unsigned int maxScrollDepth:1;
    } _has;
}

@property (nonatomic) _Bool hasArticleViewType;
@property (nonatomic) int articleViewType;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasMaxScrollDepth;
@property (nonatomic) float maxScrollDepth;
@property (nonatomic, readonly) _Bool hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;
@property (nonatomic, readonly) _Bool hasReferringSite;
@property (retain, nonatomic) NSString *referringSite;
@property (nonatomic, readonly) _Bool hasWindowId;
@property (retain, nonatomic) NSString *windowId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
