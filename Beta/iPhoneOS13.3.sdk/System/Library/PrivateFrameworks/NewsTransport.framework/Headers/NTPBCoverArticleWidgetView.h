/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBCoverArticleWidgetView : PBCodable

{
    int _coverArticleWidgetArticleCount;
    NSData *_coverArticleWidgetViewingSessionId;
    CDStruct_bb0d9f0d _has;
}

@property (nonatomic, readonly) _Bool hasCoverArticleWidgetViewingSessionId;
@property (retain, nonatomic) NSData *coverArticleWidgetViewingSessionId;
@property (nonatomic) _Bool hasCoverArticleWidgetArticleCount;
@property (nonatomic) int coverArticleWidgetArticleCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
