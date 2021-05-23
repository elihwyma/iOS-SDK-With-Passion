/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBArticleViewWatch : PBCodable

{
    int _articleHostViewTypeWatch;
    NSString *_articleId;
    NSString *_articleViewingSessionIdWatch;
    NSString *_sourceChannelId;
    _Bool _didScroll;
    struct {
        unsigned int articleHostViewTypeWatch:1;
        unsigned int didScroll:1;
    } _has;
}

@property (nonatomic) _Bool hasArticleHostViewTypeWatch;
@property (nonatomic) int articleHostViewTypeWatch;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionIdWatch;
@property (retain, nonatomic) NSString *articleViewingSessionIdWatch;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasDidScroll;
@property (nonatomic) _Bool didScroll;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
