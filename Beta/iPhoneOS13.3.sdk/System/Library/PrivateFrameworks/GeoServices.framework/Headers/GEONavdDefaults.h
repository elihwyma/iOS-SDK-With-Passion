/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEONavdDefaults : NSObject

@property (nonatomic, readonly) _Bool shouldRunNavigationInDaemon;
@property (nonatomic, readonly) _Bool shouldShowServiceErrorAlert;
@property (nonatomic, readonly) _Bool shouldLazyLoadRoutes;
@property (nonatomic, readonly) _Bool shouldUseGuidanceEventManager;
@property (nonatomic, readonly) _Bool shouldRequestLaneGuidance;
@property (nonatomic, readonly) _Bool shouldRequestInlineShields;
@property (nonatomic, readonly) int startValidDistanceOffset;
@property (nonatomic, readonly) int endValidDistanceOffset;
@property (nonatomic, readonly) _Bool shouldAutomaticallyRerouteTrafficIncidents;
@property (nonatomic, readonly) double automaticTrafficIncidentRerouteDelay;
@property (nonatomic, readonly) double maxDistanceFromOriginToSuppressReroute;
@property (nonatomic, readonly) _Bool shouldMatchToLAR;
@property (nonatomic, readonly) _Bool shouldSnapToParkingLotSegments;
@property (nonatomic, readonly) double minimumDistanceToGetLocationUpdatesInMeters;
@property (nonatomic, readonly) double minimumDistanceToConsiderLeechedLocationInMeters;
@property (nonatomic, readonly) double minimumTimeIntervalToConsiderLeechedLocationInSeconds;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyWhileStationaryForDriving;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyWhileStationaryForWalking;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyWhileStationaryForTransit;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyForWalking;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyForDriving;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyForTransit;
@property (nonatomic, readonly) double locationUpdateTimerInterval;
@property (nonatomic, readonly) double staleLocationUseTimerInterval;
@property (nonatomic, readonly) double extraLocationWaitTimeInterval;
@property (nonatomic, readonly) double locationFreshnessThreshold;
@property (nonatomic, readonly) double locationReuseThreshold;
@property (nonatomic, readonly) double minimumDistanceToCompareAgainstLocationAccuracy;
@property (nonatomic, readonly) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue;
@property (nonatomic, readonly) unsigned long long initialClientInitiatedHypothesisCacheAccessValue;
@property (nonatomic, readonly) double hypothesisResponseStaleToRefreshThresholdInSeconds;
@property (nonatomic, readonly) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
@property (nonatomic, readonly) double hypothesisShouldPersistThresholdInSeconds;
@property (nonatomic, readonly) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
@property (nonatomic, readonly) long long maximumNumberOfDestinationsToMonitor;
@property (nonatomic, readonly) double pendingStopTimeToLive;
@property (nonatomic, readonly) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
@property (nonatomic, readonly) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
@property (nonatomic, readonly) unsigned long long accessValueThresholdToUpdateCacheEntries;
@property (nonatomic, readonly) unsigned long long maximumNumberOfProcessingLoopRepeats;
@property (nonatomic, readonly) double refreshTimeIntervalToUseIfError;
@property (nonatomic, readonly) unsigned long long refreshEquationLowestFrequency;
@property (nonatomic, readonly) unsigned long long refreshEquationLowestFrequencyTransit;
@property (nonatomic, readonly) unsigned long long refreshEquationHighestFrequency;
@property (nonatomic, readonly) double maximumRefreshIntervalLeeway;
@property (nonatomic, readonly) double minimumTimerTimeStampFudge;
@property (nonatomic, readonly) double refreshTimeIntervalBackoffBase;
@property (nonatomic, readonly) double refreshTimeIntervalBackoffMax;
@property (nonatomic, readonly) double predictionsWatchdogInterval;
@property (nonatomic, readonly) double defaultExpirationOffset;
@property (nonatomic, readonly) double minimumExpirationOffset;
@property (nonatomic, readonly) double ageForRefresh;
@property (nonatomic, readonly) unsigned long long maximumNumberOfLeechedLocations;
@property (nonatomic, readonly) double updateTimeout;
@property (nonatomic, readonly) _Bool useConservativeDepartureForRefreshTimer;
@property (nonatomic, readonly) double maximumUserRoutingPreferencesAge;
@property (nonatomic, readonly) unsigned long long maximumTraceFileCount;
@property (nonatomic, readonly) double exitRegionSize;
@property (nonatomic, readonly) _Bool shouldUseServerSideETAs;
@property (nonatomic, readonly) _Bool transitTTLSupported;
@property (nonatomic, readonly) double averageWalkingSpeed;
@property (nonatomic, readonly) double slowWalkingSpeed;
@property (nonatomic, readonly) double fastWalkingSpeed;
@property (nonatomic, readonly) unsigned long long minRandomJitterForHypothesisWakeup;
@property (nonatomic, readonly) unsigned long long maxRandomJitterForHypothesisWakeup;
@property (nonatomic, readonly) _Bool transitTextInPlanningArtwork;
@property (nonatomic, readonly) _Bool transitListInstructionTimeText;

+ (id)sharedInstance;

@end
