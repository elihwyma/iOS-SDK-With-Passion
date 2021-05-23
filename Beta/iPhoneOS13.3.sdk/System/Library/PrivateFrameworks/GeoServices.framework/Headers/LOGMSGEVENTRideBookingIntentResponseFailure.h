/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface LOGMSGEVENTRideBookingIntentResponseFailure : PBCodable

{
    int _failure;
    int _intent;
    struct {
        unsigned int has_failure:1;
        unsigned int has_intent:1;
    } _flags;
}

@property (nonatomic) _Bool hasIntent;
@property (nonatomic) int intent;
@property (nonatomic) _Bool hasFailure;
@property (nonatomic) int failure;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)intentAsString:(int)arg1;
- (int)StringAsIntent:(id)arg1;
- (id)failureAsString:(int)arg1;
- (int)StringAsFailure:(id)arg1;

@end
