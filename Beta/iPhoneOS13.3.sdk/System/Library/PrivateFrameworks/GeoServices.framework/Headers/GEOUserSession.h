/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOUserSessionEntity, GEOUserSessionSnapshot, NSData;

@protocol OS_dispatch_queue;

@interface GEOUserSession : NSObject

{
    struct GEOSessionID _sessionID;
    double _sessionCreationTime;
    unsigned int _sequenceNumber;
    struct GEOSessionID _longSessionID;
    double _longSessionIDGenerationTime;
    struct GEOSessionID _thirtyDayCountsSessionID;
    double _thirtyDayCountsSessionIDGenerationTime;
    _Bool _shareSessionWithMaps;
    GEOUserSessionEntity *_mapsUserSessionEntity;
    _Bool _zeroSessionIDMode;
    struct GEOSessionID _cohortSessionID;
    double _cohortSessionStartTime;
    struct os_unfair_lock_s _lock;
    NSData *_navigationDirectionsID;
    struct GEOSessionID _navigationSessionID;
    double _navigationSessionStartTime;
    NSData *_previousNavigationDirectionsID;
    struct GEOSessionID _previousNavigationSessionID;
    double _previousNavigationSessionStartTime;
    double _previousNavigationSessionEndTime;
    struct GEOSessionID _zeroSessionID;
    unsigned char _shortSessionMachElapsedShiftFactor;
    struct GEOSessionID _shortSessionID;
    double _shortSessionCreationTime;
    unsigned long long _shortSessionMachTimeBasis;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    int _shortSessionChangedToken;
}

@property (nonatomic) _Bool shareSessionWithMaps;
@property (retain, nonatomic) GEOUserSessionEntity *mapsUserSessionEntity;
@property (nonatomic, readonly) struct GEOSessionID longSessionID;
@property (nonatomic) _Bool zeroSessionIDMode;
@property (nonatomic, readonly) GEOUserSessionEntity *longSessionEntity;
@property (nonatomic, readonly) GEOUserSessionEntity *navSessionEntity;
@property (nonatomic, readonly) GEOUserSessionEntity *cohortSessionEntity;
@property (nonatomic, readonly) GEOUserSessionSnapshot *userSessionSnapshot;

+ (id)sharedInstance;
+ (_Bool)isGeod;
+ (void)setIsGeod;

- (id)init;
- (void)dealloc;
- (void)_updateWithNewUUIDForSessionID:(struct GEOSessionID *)arg1;
- (void)_shortSessionWithBasisComponentsCompletion:(CDUnknownBlockType)arg1;
- (void)_overrideShortSessionId:(struct GEOSessionID)arg1 sessionMachBasisTime:(unsigned long long)arg2 sessionStartTime:(double)arg3;
- (id)shortSessionEntity;
- (void)_rollInitialLongSessionId;
- (void)_renewLongSessionID;
- (void)_renewThirtyDayCountsSessionID;
- (void)_renewCohortSessionID;
- (void)prepareForNewShortSession;
- (void)_createLongSessionWithOffset:(_Bool)arg1;
- (void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(_Bool)arg2;
- (id)thirtyDayCountsEntity;
- (double)_getCurrentTime;
- (void)_generateNewNavSessionID;
- (struct GEOSessionID)thirtyDayCountsSessionID;
- (void)_updateNavSessionID;
- (void)_resetSessionID;
- (void)_safe_renewLongSessionID;
- (void)_safe_renewThirtyDayCountsSessionID;
- (void)_safe_renewCohortSessionID;
- (void)mapsSessionEntityWithCallback:(CDUnknownBlockType)arg1 shareSessionIDWithMaps:(_Bool)arg2 resetSession:(_Bool)arg3;
- (void)startNavigationSessionWithDirectionsID:(id)arg1 originalDirectionsID:(id)arg2;
- (void)endNavigationSession;

@end
