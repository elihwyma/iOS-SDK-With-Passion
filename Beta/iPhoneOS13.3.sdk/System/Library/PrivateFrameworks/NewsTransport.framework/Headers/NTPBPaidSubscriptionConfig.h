/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBPaidSubscriptionConfig : PBCodable

{
    long long _maxGroupSizeIPad;
    long long _maxGroupSizeIPhone;
    long long _maxTimesHeadlineInGroup;
    struct {
        unsigned int maxGroupSizeIPad:1;
        unsigned int maxGroupSizeIPhone:1;
        unsigned int maxTimesHeadlineInGroup:1;
    } _has;
}

@property (nonatomic) _Bool hasMaxGroupSizeIPad;
@property (nonatomic) long long maxGroupSizeIPad;
@property (nonatomic) _Bool hasMaxGroupSizeIPhone;
@property (nonatomic) long long maxGroupSizeIPhone;
@property (nonatomic) _Bool hasMaxTimesHeadlineInGroup;
@property (nonatomic) long long maxTimesHeadlineInGroup;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
