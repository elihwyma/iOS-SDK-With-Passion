/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <SignpostSupport/SignpostObject.h>

@class NSArray, NSString, NSUUID, SignpostMetrics;

@interface SignpostEvent : SignpostObject

{
    _Bool __hasTotalFrames;
    _Bool _isAnimationStart;
    int _tv_usec;
    int _tz_minuteswest;
    int _tz_dsttime;
    int _processID;
    long long _tv_sec;
    unsigned long long _processUniqueID;
    unsigned long long _threadID;
    unsigned long long _eventType;
    unsigned long long _overridingBeginMachContinuousTime;
    unsigned long long _overridingEndMachContinuousTime;
    unsigned long long _overridingEmitMachContinuousTime;
    NSUUID *_processImageUUID;
    NSString *_processImagePath;
    NSString *_processName;
    NSString *_metadata;
    NSArray *_metadataSegments;
    NSArray *_stackFrames;
    SignpostMetrics *_metrics;
    unsigned long long __totalFrameCount;
    unsigned long long __machContinuousTimestamp;
}

@property (nonatomic) _Bool _hasTotalFrames;
@property (nonatomic) unsigned long long _totalFrameCount;
@property (nonatomic) _Bool isAnimationStart;
@property (nonatomic) long long tv_sec;
@property (nonatomic) int tv_usec;
@property (nonatomic) int tz_minuteswest;
@property (nonatomic) int tz_dsttime;
@property (nonatomic) unsigned long long _machContinuousTimestamp;
@property (nonatomic) int processID;
@property (nonatomic) unsigned long long processUniqueID;
@property (nonatomic) unsigned long long threadID;
@property (retain, nonatomic) NSUUID *processImageUUID;
@property (retain, nonatomic) NSString *processImagePath;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *metadata;
@property (retain, nonatomic) NSArray *metadataSegments;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, readonly) unsigned long long _resolvedEventType;
@property (nonatomic, readonly) NSString *_key;
@property (nonatomic, readonly) _Bool overridesTime;
@property (nonatomic, readonly) _Bool _overridesOwnTime;
@property (nonatomic) unsigned long long overridingBeginMachContinuousTime;
@property (nonatomic) unsigned long long overridingEndMachContinuousTime;
@property (nonatomic) unsigned long long overridingEmitMachContinuousTime;
@property (retain, nonatomic) NSArray *stackFrames;
@property (nonatomic, readonly) unsigned long long timeRecordedMachContinuousTime;
@property (nonatomic, readonly) unsigned long long timeRecordedNanoseconds;
@property (nonatomic, readonly) _Bool overridesBeginTime;
@property (nonatomic, readonly) _Bool overridesEndTime;
@property (nonatomic, readonly) _Bool overridesEmitTime;
@property (nonatomic, readonly) unsigned long long overridingBeginNanoseconds;
@property (nonatomic, readonly) unsigned long long overridingEndNanoseconds;
@property (nonatomic, readonly) unsigned long long overridingEmitNanoseconds;
@property (nonatomic, readonly) SignpostMetrics *metrics;
@property (nonatomic, readonly) _Bool isSyntheticIntervalEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serializationTypeNumber;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (float)durationSeconds;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (id)humanReadableType;
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2;
- (void)_populateMetrics;
- (void)_adjustBeginTimeVal:(struct timeval *)arg1;
- (void)_adjustEndTimeVal:(struct timeval *)arg1;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(_Bool)arg3;
- (id)_debugDescription:(_Bool)arg1;
- (unsigned long long)_resolvedBeginTime;
- (unsigned long long)_resolvedEndTime;
- (void)_adjustTimeStruct:(struct timeval *)arg1 asBegin:(_Bool)arg2;
- (id)_argumentObjectWithName:(id)arg1;
- (id)_argumentObjectWithName:(id)arg1 expectedClass:(Class)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3 unixDate:(struct timeval *)arg4 unixTimeZone:(struct timezone *)arg5 stackFrames:(id)arg6;
- (id)_stringArgumentWithName:(id)arg1;
- (id)_numberArgumentWithName:(id)arg1;
- (id)_dataArgumentWithName:(id)arg1;

@end
