/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ATXAnchorModelPBAnchorMetadata : PBCodable

{
    NSString *_anchorEventIdentifier;
    int _anchorEventType;
    int _anchorType;
    unsigned int _dayOfMonth;
    int _dayOfWeek;
    unsigned int _hourOfDay;
    NSString *_locationIdentifier;
    int _locationType;
    unsigned int _month;
    struct {
        unsigned int anchorEventType:1;
        unsigned int anchorType:1;
        unsigned int dayOfMonth:1;
        unsigned int dayOfWeek:1;
        unsigned int hourOfDay:1;
        unsigned int locationType:1;
        unsigned int month:1;
    } _has;
}

@property (nonatomic) _Bool hasAnchorType;
@property (nonatomic) int anchorType;
@property (nonatomic, readonly) _Bool hasAnchorEventIdentifier;
@property (retain, nonatomic) NSString *anchorEventIdentifier;
@property (nonatomic) _Bool hasAnchorEventType;
@property (nonatomic) int anchorEventType;
@property (nonatomic) _Bool hasMonth;
@property (nonatomic) unsigned int month;
@property (nonatomic) _Bool hasDayOfMonth;
@property (nonatomic) unsigned int dayOfMonth;
@property (nonatomic) _Bool hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic) _Bool hasDayOfWeek;
@property (nonatomic) int dayOfWeek;
@property (nonatomic, readonly) _Bool hasLocationIdentifier;
@property (retain, nonatomic) NSString *locationIdentifier;
@property (nonatomic) _Bool hasLocationType;
@property (nonatomic) int locationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)dayOfWeekAsString:(int)arg1;
- (int)StringAsDayOfWeek:(id)arg1;
- (id)locationTypeAsString:(int)arg1;
- (int)StringAsLocationType:(id)arg1;
- (id)anchorTypeAsString:(int)arg1;
- (int)StringAsAnchorType:(id)arg1;
- (id)anchorEventTypeAsString:(int)arg1;
- (int)StringAsAnchorEventType:(id)arg1;

@end
