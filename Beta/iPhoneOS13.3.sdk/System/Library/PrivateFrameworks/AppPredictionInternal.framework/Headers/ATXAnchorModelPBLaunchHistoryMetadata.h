/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ATXAnchorModelPBLaunchHistoryMetadata : PBCodable

{
    unsigned int _launchesInLast14Days;
    unsigned int _launchesInLast28Days;
    unsigned int _launchesInLast2Hours;
    unsigned int _launchesInLast7Days;
    struct {
        unsigned int launchesInLast14Days:1;
        unsigned int launchesInLast28Days:1;
        unsigned int launchesInLast2Hours:1;
        unsigned int launchesInLast7Days:1;
    } _has;
}

@property (nonatomic) _Bool hasLaunchesInLast2Hours;
@property (nonatomic) unsigned int launchesInLast2Hours;
@property (nonatomic) _Bool hasLaunchesInLast7Days;
@property (nonatomic) unsigned int launchesInLast7Days;
@property (nonatomic) _Bool hasLaunchesInLast14Days;
@property (nonatomic) unsigned int launchesInLast14Days;
@property (nonatomic) _Bool hasLaunchesInLast28Days;
@property (nonatomic) unsigned int launchesInLast28Days;

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
