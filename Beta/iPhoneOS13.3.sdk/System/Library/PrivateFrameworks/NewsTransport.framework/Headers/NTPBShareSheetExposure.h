/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBShareSheetExposure : PBCodable

{
    NSString *_contentId;
    int _contentType;
    NSString *_referencedArticleId;
    int _shareSheetExposureLocation;
    struct {
        unsigned int contentType:1;
        unsigned int shareSheetExposureLocation:1;
    } _has;
}

@property (nonatomic) _Bool hasContentType;
@property (nonatomic) int contentType;
@property (nonatomic, readonly) _Bool hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic, readonly) _Bool hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) _Bool hasShareSheetExposureLocation;
@property (nonatomic) int shareSheetExposureLocation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)contentTypeAsString:(int)arg1;
- (int)StringAsContentType:(id)arg1;

@end
