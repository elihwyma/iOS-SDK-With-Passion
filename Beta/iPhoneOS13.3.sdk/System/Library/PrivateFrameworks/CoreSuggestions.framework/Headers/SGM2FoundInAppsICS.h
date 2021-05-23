/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SGM2FoundInAppsICS : PBCodable

{
    int _datetime;
    NSString *_key;
    int _timezone;
    struct {
        unsigned int datetime:1;
        unsigned int timezone:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasTimezone;
@property (nonatomic) int timezone;
@property (nonatomic) _Bool hasDatetime;
@property (nonatomic) int datetime;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)timezoneAsString:(int)arg1;
- (int)StringAsTimezone:(id)arg1;
- (id)datetimeAsString:(int)arg1;
- (int)StringAsDatetime:(id)arg1;

@end
