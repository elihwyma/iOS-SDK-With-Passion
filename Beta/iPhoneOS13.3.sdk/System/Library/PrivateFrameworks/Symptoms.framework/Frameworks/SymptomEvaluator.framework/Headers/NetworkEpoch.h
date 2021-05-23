/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AnalyticsWorkspace, NSDate, NSDictionary, NSManagedObjectID, NSMutableDictionary, NSMutableSet, NSString, NSUUID, NetworkAttachmentAnalytics, SFLiveRoutePerf, SFNetworkAttachment, StopWatch;

__attribute__((visibility("hidden")))
@interface NetworkEpoch : NSObject

{
    NSDate *createdAt;
    NSString *identifier;
    _Bool fromRoamingEvent;
    AnalyticsWorkspace *workspace;
    NetworkAttachmentAnalytics *naspace;
    NSMutableDictionary *tickers;
    NSManagedObjectID *currentLiveRoutePerfObjectID;
    double lastBytesDelta;
    NSDate *lastBytesPartialUpdate;
    _Bool isSnapshot;
    NSDictionary *scores;
    _Bool isLowLqm;
    _Bool isLowq;
    _Bool isFaulty;
    _Bool isKnownGood;
    _Bool _active;
    _Bool _oncell;
    _Bool _supportsIPv4;
    _Bool _supportsIPv6;
    _Bool _hasInternetDNS;
    _Bool _knownGoodNotified;
    _Bool _deleteNetworkAttachmentsWhenDone;
    int _bars;
    unsigned int _seqno;
    SFNetworkAttachment *_durable;
    long long _loi;
    struct __NStatSource *_defRoute4;
    struct __NStatSource *_defRoute6;
    NSString *_interfaceName;
    double _lqmTransitions;
    NSDate *_lastCountedDown;
    StopWatch *_overall;
    StopWatch *_lowLqm;
    StopWatch *_lowq;
    StopWatch *_fatal;
    SFLiveRoutePerf *_partial;
    SFLiveRoutePerf *_partial4;
    SFLiveRoutePerf *_partial6;
    double _initialRttAvg;
    double _initialRttVar;
    double _topDownlRate;
    NSMutableSet *_hasDNS;
    NSMutableSet *_impDNS;
    NSMutableSet *_hasGW;
    NSUUID *_uuid;
}

@property (nonatomic) long long loi;
@property (readonly) _Bool active;
@property (readonly) _Bool oncell;
@property (nonatomic) struct __NStatSource *defRoute4;
@property (nonatomic) struct __NStatSource *defRoute6;
@property (nonatomic) _Bool supportsIPv4;
@property (nonatomic) _Bool supportsIPv6;
@property (readonly) NSString *primaryKey;
@property (readonly) NSString *interfaceName;
@property int bars;
@property double lqmTransitions;
@property (retain, nonatomic) NSDate *lastCountedDown;
@property (retain, nonatomic) StopWatch *overall;
@property (retain, nonatomic) StopWatch *lowLqm;
@property (retain, nonatomic) StopWatch *lowq;
@property (retain, nonatomic) StopWatch *fatal;
@property (retain, nonatomic) SFLiveRoutePerf *partial;
@property (retain, nonatomic) SFLiveRoutePerf *partial4;
@property (retain, nonatomic) SFLiveRoutePerf *partial6;
@property (nonatomic, readonly) double initialRttAvg;
@property (nonatomic, readonly) double initialRttVar;
@property (nonatomic) double topDownlRate;
@property (retain, nonatomic) NSMutableSet *hasDNS;
@property (retain, nonatomic) NSMutableSet *impDNS;
@property (retain, nonatomic) NSMutableSet *hasGW;
@property (nonatomic) _Bool hasInternetDNS;
@property (nonatomic, readonly) SFNetworkAttachment *durable;
@property (nonatomic, readonly) SFLiveRoutePerf *currentLiveRoutePerf;
@property (retain, nonatomic) NSUUID *uuid;
@property _Bool knownGoodNotified;
@property (readonly) unsigned int seqno;
@property (nonatomic) _Bool deleteNetworkAttachmentsWhenDone;

+ (_Bool)parsePrimaryKeyStr:(const char *)arg1 majorIDLengthInBytes:(int *)arg2 minorIDLengthInBytes:(int *)arg3;
+ (_Bool)parsePrimaryKey:(id)arg1 majorID:(id *)arg2 minorID:(id *)arg3;
+ (void)resetDataForSSIDs:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3;
+ (id)epochWithPrimaryKey:(id)arg1 interfaceName:(id)arg2 isCell:(_Bool)arg3 maxBars:(int)arg4 roamingEvent:(_Bool)arg5 roamingAttrs:(long long)arg6 supportsIPv4:(_Bool)arg7 supportsIPv6:(_Bool)arg8 inWorkspace:(id)arg9 andQueue:(id)arg10;
+ (unsigned long long)coalescingFactor;
+ (_Bool)pruneDataOlderThan:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3;
+ (id)snapshotsIn:(id)arg1 olderThan:(id)arg2;
+ (void)resetDataFor:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)mapLOIToString;
- (void)unloadDurableState;
- (long long)getMatchingRTLocationOfInterestType;
- (int)compareToSnapshot:(id)arg1;
- (_Bool)hasCountDownActive:(id)arg1;
- (void)updateMetrics:(id)arg1 source:(struct __NStatSource *)arg2 wasProgress:(CDUnknownBlockType)arg3;
- (void)reportDataStall;
- (void)reportCaptivityRedirect;
- (void)reportCertError;
- (void)reportAdminDisable;
- (void)retire;
- (_Bool)countDownStop:(id)arg1 eventTimeStamp:(id)arg2;
- (_Bool)createCountDown:(id)arg1 atTime:(id)arg2 nextTick:(unsigned long long)arg3 ticksTotal:(unsigned long long)arg4 onQueue:(id)arg5 withIterationBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (_Bool)hasTypicalShortStay;
- (_Bool)matchesLOI:(long long)arg1;
- (id)_initWithPrimaryKey:(id)arg1 interfaceName:(id)arg2 isCell:(_Bool)arg3 maxBars:(int)arg4 roamingEvent:(_Bool)arg5 roamingAttrs:(long long)arg6 supportsIPv4:(_Bool)arg7 supportsIPv6:(_Bool)arg8 inWorkspace:(id)arg9 andQueue:(id)arg10;
- (id)_networkAttachmentDurableState;
- (void)_retrieveLOIAttrsOnQueue:(id)arg1 roamingEvent:(_Bool)arg2 roamingAttrs:(long long)arg3;
- (id)_createCellSignature;
- (_Bool)_isLiveRoutePerfinScope:(id)arg1 forTime:(id)arg2;
- (id)establishPartials:(id)arg1 withFlag:(_Bool)arg2;

@end
