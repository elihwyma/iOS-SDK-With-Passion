/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SignpostSupportObject : NSObject

{
    NSString *_subsystem;
    NSString *_category;
    double _timebaseRatio;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *subsystem;
@property (retain, nonatomic) NSString *category;
@property (nonatomic, readonly) long long tv_sec;
@property (nonatomic, readonly) int tv_usec;
@property (nonatomic, readonly) int tz_minuteswest;
@property (nonatomic, readonly) int tz_dsttime;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;
@property (nonatomic, readonly) unsigned long long startNanoseconds;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (nonatomic, readonly) unsigned long long endNanoseconds;
@property (nonatomic, readonly) unsigned long long durationMachContinuousTime;
@property (nonatomic, readonly) float durationSeconds;
@property (nonatomic) double timebaseRatio;
@property (nonatomic, readonly) NSDate *beginDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serializationTypeNumber;
+ (id)headerWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (double)durationMs;
- (id)serializeableDictionaryWithShouldRedact:(_Bool)arg1;
- (id)humanReadableType;
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2;
- (id)humanReadableDictionaryRepresentation;
- (id)beginWallTimeStringWithTimeZoneName:(id)arg1;
- (id)endWallTimeStringWithTimeZoneName:(id)arg1;
- (unsigned long long)durationNanoseconds;
- (void)_adjustBeginTimeVal:(struct timeval *)arg1;
- (void)_adjustEndTimeVal:(struct timeval *)arg1;
- (_Bool)_populateTimeStruct:(struct time *)arg1 withTimeval:(struct timeval *)arg2 withTZString:(id)arg3;
- (id)_wallTimeStringWithTimeZone:(id)arg1 isBegin:(_Bool)arg2;
- (_Bool)_hasBeginTimeval;
- (_Bool)_hasEndTimeval;
- (_Bool)beginTimeval:(struct timeval *)arg1;
- (_Bool)endTimeval:(struct timeval *)arg1;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(_Bool)arg3;
- (id)_descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2 asBegin:(_Bool)arg3;
- (_Bool)_containsTimeObject:(id)arg1;
- (double)startSeconds;
- (double)endSeconds;
- (double)startMs;
- (double)endMs;
- (_Bool)beginTimezone:(struct timezone *)arg1;
- (_Bool)endTimezone:(struct timezone *)arg1;
- (id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3;
- (_Bool)_containsMCT:(unsigned long long)arg1;
- (id)_containedObjectsFromArray:(id)arg1;

@end
