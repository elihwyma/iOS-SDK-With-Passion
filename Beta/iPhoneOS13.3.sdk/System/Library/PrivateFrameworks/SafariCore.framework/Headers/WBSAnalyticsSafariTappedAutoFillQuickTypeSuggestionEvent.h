/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WBSAnalyticsSafariTappedAutoFillQuickTypeSuggestionEvent : PBCodable

{
    unsigned long long _timestamp;
    int _category;
    int _formProperty;
    CDStruct_18b2ecd0 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasCategory;
@property (nonatomic) int category;
@property (nonatomic) _Bool hasFormProperty;
@property (nonatomic) int formProperty;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)categoryAsString:(int)arg1;
- (int)StringAsCategory:(id)arg1;
- (id)formPropertyAsString:(int)arg1;
- (int)StringAsFormProperty:(id)arg1;

@end
