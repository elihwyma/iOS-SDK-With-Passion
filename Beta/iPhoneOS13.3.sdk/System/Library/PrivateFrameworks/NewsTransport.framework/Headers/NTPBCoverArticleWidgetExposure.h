/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBCoverArticleWidgetExposure : PBCodable

{
    int _coverArticleWidgetArticleCount;
    NSData *_coverArticleWidgetExposureSessionId;
    NSData *_feedViewExposureId;
    CDStruct_bb0d9f0d _has;
}

@property (nonatomic, readonly) _Bool hasCoverArticleWidgetExposureSessionId;
@property (retain, nonatomic) NSData *coverArticleWidgetExposureSessionId;
@property (nonatomic) _Bool hasCoverArticleWidgetArticleCount;
@property (nonatomic) int coverArticleWidgetArticleCount;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
