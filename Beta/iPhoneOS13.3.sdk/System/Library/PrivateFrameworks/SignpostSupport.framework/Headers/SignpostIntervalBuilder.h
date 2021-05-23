/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary, SignpostCAInstrumentationProcessor;

@protocol OS_dispatch_queue;

@interface SignpostIntervalBuilder : NSObject

{
    _Bool _buildAnimationCompositeIntervalTimelines;
    _Bool _compositeIntervalIsInFlight;
    _Bool _foundMacOSSpecificData;
    _Bool _foundIPhoneOSSpecificData;
    _Bool _foundCAWSInMemoryData;
    NSMutableDictionary *_systemwideDictionary;
    NSMutableDictionary *_processwideDictionary;
    NSMutableDictionary *_threadwideDictionary;
    NSMapTable *_outstandingAnimationState;
    unsigned long long _totalCompositeIntervalCount;
    NSObject<OS_dispatch_queue> *_syncQueue;
    unsigned long long _previousMCT;
    SignpostCAInstrumentationProcessor *_caInstrumentationProcessor;
}

@property (nonatomic, readonly) NSMutableDictionary *systemwideDictionary;
@property (nonatomic, readonly) NSMutableDictionary *processwideDictionary;
@property (nonatomic, readonly) NSMutableDictionary *threadwideDictionary;
@property (retain, nonatomic) NSMapTable *outstandingAnimationState;
@property (nonatomic) unsigned long long totalCompositeIntervalCount;
@property (nonatomic) _Bool compositeIntervalIsInFlight;
@property (nonatomic) _Bool foundMacOSSpecificData;
@property (nonatomic) _Bool foundIPhoneOSSpecificData;
@property (nonatomic) _Bool foundCAWSInMemoryData;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) unsigned long long previousMCT;
@property (nonatomic, readonly) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (nonatomic) _Bool buildAnimationCompositeIntervalTimelines;

+ (_Bool)_filterPassesRequiredSCForFramerate:(id)arg1;
+ (id)_framerateCalculationWhitelist;

- (id)init;
- (_Bool)timestampIndicatesDeviceReboot:(unsigned long long)arg1;
- (_Bool)signpostIsAnimationMetadata:(id)arg1;
- (_Bool)isMetadataSubsystem:(id)arg1 category:(id)arg2;
- (id)processEndEvent:(id)arg1 isAnimation:(_Bool *)arg2;
- (void)processEmittedEvent:(id)arg1;
- (_Bool)processBeginEvent:(id)arg1;
- (id)doneProcessing;
- (void)dropAccumulatedState;
- (id)_matchingEventForEvent:(id)arg1 removeIfFound:(_Bool)arg2;
- (_Bool)signpostIsCompositeLoop:(id)arg1;
- (_Bool)isCompositeLoopSubsystem:(id)arg1 category:(id)arg2;
- (void)_initializeMapsIfNecessary;
- (_Bool)_trackBegin:(id)arg1;
- (void)_startTrackingAnimationWithBeginEvent:(id)arg1;
- (_Bool)_handleIPhoneOsSpecialEvents:(id)arg1;
- (void)_processCompositeInterval:(id)arg1;
- (_Bool)_hasOutstandingAnimations;
- (void)_cleanupStateForBeginEvent:(id)arg1;
- (id)_animationWithBegin:(id)arg1 endEvent:(id)arg2;
- (_Bool)_handleCommonSpecialIntervals:(id)arg1;
- (_Bool)_handleMacOsSpecialIntervals:(id)arg1;
- (_Bool)_handleIPhoneOsSpecialIntervals:(id)arg1;
- (id)matchingEventForEvent:(id)arg1 removeIfFound:(_Bool)arg2;

@end
