/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBAdExposureIneligible : PBCodable

{
    int _exposureIneligibleLocationType;
    NSString *_exposureIneligibleLocationTypeId;
    int _exposureIneligibleReason;
    int _feedType;
    struct {
        unsigned int exposureIneligibleLocationType:1;
        unsigned int exposureIneligibleReason:1;
        unsigned int feedType:1;
    } _has;
}

@property (nonatomic) _Bool hasExposureIneligibleLocationType;
@property (nonatomic) int exposureIneligibleLocationType;
@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) _Bool hasExposureIneligibleLocationTypeId;
@property (retain, nonatomic) NSString *exposureIneligibleLocationTypeId;
@property (nonatomic) _Bool hasExposureIneligibleReason;
@property (nonatomic) int exposureIneligibleReason;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
- (int)StringAsFeedType:(id)arg1;

@end
