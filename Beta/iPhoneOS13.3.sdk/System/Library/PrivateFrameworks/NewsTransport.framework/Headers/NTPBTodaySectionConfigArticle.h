/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBTodaySectionConfigArticle : PBCodable

{
    NSString *_articleID;
    NSString *_displayDateString;
    NSString *_storyType;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic, readonly) _Bool hasDisplayDateString;
@property (retain, nonatomic) NSString *displayDateString;
@property (nonatomic, readonly) _Bool hasStoryType;
@property (retain, nonatomic) NSString *storyType;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;

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
