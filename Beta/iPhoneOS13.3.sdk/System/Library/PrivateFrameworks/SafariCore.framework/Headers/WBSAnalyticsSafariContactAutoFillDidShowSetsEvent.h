/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WBSAnalyticsSafariContactAutoFillDidShowSetsEvent : PBCodable

{
    unsigned long long _timestamp;
    _Bool _isShowingMeCardSets;
    _Bool _isShowingPreviouslyCustomizedSet;
    struct {
        unsigned int timestamp:1;
        unsigned int isShowingMeCardSets:1;
        unsigned int isShowingPreviouslyCustomizedSet:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasIsShowingMeCardSets;
@property (nonatomic) _Bool isShowingMeCardSets;
@property (nonatomic) _Bool hasIsShowingPreviouslyCustomizedSet;
@property (nonatomic) _Bool isShowingPreviouslyCustomizedSet;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
