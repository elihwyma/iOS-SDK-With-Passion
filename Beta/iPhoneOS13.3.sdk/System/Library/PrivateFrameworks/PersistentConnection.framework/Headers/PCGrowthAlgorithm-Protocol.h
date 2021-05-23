/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <PersistentConnection/Swift-Protocol.h>

@class NSDictionary;

@protocol PCGrowthAlgorithm <Swift>

@property (nonatomic, readonly) double currentKeepAliveInterval;
@property (nonatomic) _Bool isServerOriginatedKeepAlive;
@property (nonatomic) double minimumKeepAliveInterval;
@property (nonatomic) double maximumKeepAliveInterval;
@property (nonatomic) double serverStatsExpectedKeepAliveInterval;
@property (nonatomic) double serverStatsMaxKeepAliveInterval;
@property (nonatomic) double serverStatsMinKeepAliveInterval;
@property (nonatomic) double lastSuccessfulKeepAliveInterval;
@property (nonatomic) _Bool minimumIntervalFallbackEnabled;
@property (nonatomic) _Bool usingServerStatsAggressively;
@property (nonatomic) double minimumIntervalFallbackStateTimeout;
@property (nonatomic, readonly) unsigned long long countOfGrowthActions;
@property (copy, nonatomic, readonly) NSDictionary *cacheInfo;
@property (nonatomic, readonly) int growthStage;

- (unsigned short)processNextAction: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithCacheInfo:loggingIdentifier:algorithmName: /* Error: Ran out of types for this method. */;
- (unsigned short)useIntervalIfImprovement: /* Error: Ran out of types for this method. */;

@end
