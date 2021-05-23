/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBArticleSessionResume : PBCodable

{
    long long _publisherArticleVersion;
    NSString *_articleId;
    int _articleType;
    NSData *_articleViewingSessionId;
    NSString *_sourceChannelId;
    CDStruct_3186b938 _has;
}

@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) _Bool hasArticleType;
@property (nonatomic) int articleType;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasPublisherArticleVersion;
@property (nonatomic) long long publisherArticleVersion;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;

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
