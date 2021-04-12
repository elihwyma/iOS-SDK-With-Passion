//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostSerializable-Protocol.h>
#import <SignpostSupport/SignpostSupportTimeInterval-Protocol.h>

@class NSDate, NSString;

@interface SignpostSupportObject : NSObject <SignpostSerializable, SignpostSupportTimeInterval>
{
    NSString *_subsystem;
    NSString *_category;
    double _timebaseRatio;
}

+ (id)headerWithTimeFormat:(NSUInteger)arg1 verbosity:(unsigned char)arg2;
+ (id)serializationTypeNumber;
@property(nonatomic) double timebaseRatio; // @synthesize timebaseRatio=_timebaseRatio;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
// - (void).cxx_destruct;
- (id)_containedObjectsFromArray:(id)arg1;
- (BOOL)_containsTimeObject:(id)arg1;
- (BOOL)_containsMCT:(NSUInteger)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (double)durationMs;
- (double)endMs;
- (double)startMs;
- (double)startSeconds;
- (double)endSeconds;
- (NSUInteger)durationNanoseconds;
@property(readonly, nonatomic) float durationSeconds;
@property(readonly, nonatomic) NSUInteger durationMachContinuousTime;
@property(readonly, nonatomic) NSUInteger endNanoseconds;
@property(readonly, nonatomic) NSUInteger endMachContinuousTime;
@property(readonly, nonatomic) NSUInteger startNanoseconds;
@property(readonly, nonatomic) NSUInteger startMachContinuousTime;
@property(readonly, nonatomic) int tz_dsttime;
@property(readonly, nonatomic) int tz_minuteswest;
@property(readonly, nonatomic) int tv_usec;
@property(readonly, nonatomic) long long tv_sec;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3;
- (id)_descriptionStringForColumn:(NSUInteger)arg1 timeFormat:(NSUInteger)arg2 asBegin:(BOOL)arg3;
- (id)descriptionWithTimeFormat:(NSUInteger)arg1 verbosity:(unsigned char)arg2;
- (id)_descriptionWithTimeFormat:(NSUInteger)arg1 verbosity:(unsigned char)arg2 asBegin:(BOOL)arg3;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *beginDate;
- (BOOL)endTimeval:(struct timeval )arg1;
- (BOOL)beginTimeval:(struct timeval )arg1;
- (BOOL)endTimezone:(struct timezone )arg1;
- (BOOL)beginTimezone:(struct timezone )arg1;
- (BOOL)_hasEndTimeval;
- (BOOL)_hasBeginTimeval;
- (id)endWallTimeStringWithTimeZoneName:(id)arg1;
- (id)beginWallTimeStringWithTimeZoneName:(id)arg1;
- (id)_wallTimeStringWithTimeZone:(id)arg1 isBegin:(BOOL)arg2;
- (void)_adjustEndTimeVal:(struct timeval )arg1;
- (void)_adjustBeginTimeVal:(struct timeval )arg1;
- (BOOL)_populateTimeStruct:(struct time )arg1 withTimeval:(struct timeval )arg2 withTZString:(id)arg3;
- (id)humanReadableType;
- (id)initWithDictionary:(id)arg1;
- (id)humanReadableDictionaryRepresentation;
- (id)serializeableDictionaryWithShouldRedact:(BOOL)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2;

@end

