/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXAnchorModelPBLaunchHistoryMetadata, NSString;

@interface ATXAnchorModelPBAppLaunchMetadata : PBCodable

{
    long long _app2VecCluster;
    long long _genreId;
    ATXAnchorModelPBLaunchHistoryMetadata *_appLaunchHistory;
    NSString *_bundleId;
    int _relativeTimeSinceAnchorInSeconds;
    _Bool _appInstalledInLast48Hours;
    struct {
        unsigned int app2VecCluster:1;
        unsigned int genreId:1;
        unsigned int relativeTimeSinceAnchorInSeconds:1;
        unsigned int appInstalledInLast48Hours:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic, readonly) _Bool hasAppLaunchHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *appLaunchHistory;
@property (nonatomic) _Bool hasAppInstalledInLast48Hours;
@property (nonatomic) _Bool appInstalledInLast48Hours;
@property (nonatomic) _Bool hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds;
@property (nonatomic) _Bool hasGenreId;
@property (nonatomic) long long genreId;
@property (nonatomic) _Bool hasApp2VecCluster;
@property (nonatomic) long long app2VecCluster;

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
