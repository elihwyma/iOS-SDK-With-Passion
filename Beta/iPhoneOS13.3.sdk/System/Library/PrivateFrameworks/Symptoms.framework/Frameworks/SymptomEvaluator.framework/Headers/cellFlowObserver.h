/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface cellFlowObserver : NSObject

{
    int _classCounter[32];
    int _classFlags;
    int _intialClassFlags;
    int _everSetClassFlags;
    int _everReportedClassFlags;
    int _lastReportedClassFlags;
    unsigned int _dampeningMsecs;
    NSDate *_lastReportTimestamp;
    _Bool _dampening;
    unsigned int _seqno;
    NSMutableDictionary *_foregroundAppObservelist;
    NSMutableDictionary *_perAppMaxRRCTimeSecs;
    _Bool _flowSnapshotActive;
    NSMutableSet *_flowSnapshotApps;
    unsigned int _flowSnapshotFlags;
    double _flowSnapshotAccumulatedTCEnabledTime;
    NSDate *_flowSnapshotTCEnabledStartTime;
    _Bool _enabled;
    _Bool _foreground;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)beginTrafficClassFlowSnapshot;
- (void)endTrafficClassFlowSnapshot:(id)arg1 periodUsecs:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)noteForegroundState:(_Bool)arg1 forApp:(id)arg2 hasForegroundApps:(_Bool)arg3;
- (unsigned int)noteFlow:(id)arg1 snapshot:(id)arg2 present:(_Bool)arg3 trackedBy:(id)arg4;
- (void)configurePolicies:(id)arg1;
- (id)infoDir;
- (_Bool)performDisposition:(unsigned int)arg1 present:(_Bool)arg2;
- (void)noteNewUsage:(unsigned int)arg1;
- (void)resetTrafficClassFlowSnapshot:(_Bool)arg1;

@end
