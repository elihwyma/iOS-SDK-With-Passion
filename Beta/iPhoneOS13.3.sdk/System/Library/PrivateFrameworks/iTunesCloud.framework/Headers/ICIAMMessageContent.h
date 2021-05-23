/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICIAMMetricEvent, NSMutableArray, NSString;

@interface ICIAMMessageContent : PBCodable <Swift>

{
    NSString *_body;
    ICIAMMetricEvent *_cardClickEvent;
    ICIAMMetricEvent *_closeClickEvent;
    NSMutableArray *_contentParameters;
    NSString *_identifier;
    NSMutableArray *_images;
    NSMutableArray *_messageActions;
    ICIAMMetricEvent *_pageEvent;
    NSString *_subtitle;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) _Bool hasBody;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) NSMutableArray *messageActions;
@property (retain, nonatomic) NSMutableArray *contentParameters;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasPageEvent;
@property (retain, nonatomic) ICIAMMetricEvent *pageEvent;
@property (nonatomic, readonly) _Bool hasCloseClickEvent;
@property (retain, nonatomic) ICIAMMetricEvent *closeClickEvent;
@property (nonatomic, readonly) _Bool hasCardClickEvent;
@property (retain, nonatomic) ICIAMMetricEvent *cardClickEvent;

+ (Class)imagesType;
+ (Class)messageActionsType;
+ (Class)contentParametersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearImages;
- (void)addImages:(id)arg1;
- (unsigned long long)imagesCount;
- (id)imagesAtIndex:(unsigned long long)arg1;
- (void)addMessageActions:(id)arg1;
- (void)addContentParameters:(id)arg1;
- (unsigned long long)messageActionsCount;
- (void)clearMessageActions;
- (id)messageActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentParametersCount;
- (void)clearContentParameters;
- (id)contentParametersAtIndex:(unsigned long long)arg1;

@end
