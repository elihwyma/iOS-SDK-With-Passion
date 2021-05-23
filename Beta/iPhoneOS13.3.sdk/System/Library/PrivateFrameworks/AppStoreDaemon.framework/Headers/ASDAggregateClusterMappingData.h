/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@interface ASDAggregateClusterMappingData : PBCodable <Swift>

{
    CDStruct_95bda58d _clusterAppCounts;
    CDStruct_95bda58d _clusterIDs;
    CDStruct_95bda58d _clusterVersions;
    CDStruct_95bda58d _weightedAppForgroundUsages;
    CDStruct_95bda58d _weightedAppLaunches;
    int _encodingVersion;
}

@property (nonatomic) int encodingVersion;
@property (nonatomic, readonly) unsigned long long clusterIDsCount;
@property (nonatomic, readonly) int *clusterIDs;
@property (nonatomic, readonly) unsigned long long clusterVersionsCount;
@property (nonatomic, readonly) int *clusterVersions;
@property (nonatomic, readonly) unsigned long long clusterAppCountsCount;
@property (nonatomic, readonly) int *clusterAppCounts;
@property (nonatomic, readonly) unsigned long long weightedAppLaunchesCount;
@property (nonatomic, readonly) int *weightedAppLaunches;
@property (nonatomic, readonly) unsigned long long weightedAppForgroundUsagesCount;
@property (nonatomic, readonly) int *weightedAppForgroundUsages;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearClusterIDs;
- (int)clusterIDAtIndex:(unsigned long long)arg1;
- (void)addClusterID:(int)arg1;
- (void)clearClusterVersions;
- (int)clusterVersionAtIndex:(unsigned long long)arg1;
- (void)addClusterVersion:(int)arg1;
- (void)clearClusterAppCounts;
- (int)clusterAppCountAtIndex:(unsigned long long)arg1;
- (void)addClusterAppCount:(int)arg1;
- (void)clearWeightedAppLaunches;
- (int)weightedAppLaunchesAtIndex:(unsigned long long)arg1;
- (void)addWeightedAppLaunches:(int)arg1;
- (void)clearWeightedAppForgroundUsages;
- (int)weightedAppForgroundUsageAtIndex:(unsigned long long)arg1;
- (void)addWeightedAppForgroundUsage:(int)arg1;
- (void)setClusterIDs:(int *)arg1 count:(unsigned long long)arg2;
- (void)setClusterVersions:(int *)arg1 count:(unsigned long long)arg2;
- (void)setClusterAppCounts:(int *)arg1 count:(unsigned long long)arg2;
- (void)setWeightedAppLaunches:(int *)arg1 count:(unsigned long long)arg2;
- (void)setWeightedAppForgroundUsages:(int *)arg1 count:(unsigned long long)arg2;

@end
