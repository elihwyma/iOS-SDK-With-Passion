/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <SignpostSupport/SignpostObject.h>

@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

{
    SignpostEvent *_beginEvent;
    SignpostEvent *_endEvent;
}

@property (nonatomic, readonly) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (nonatomic, readonly) _Bool isSyntheticInterval;

+ (id)serializationTypeNumber;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)scope;
- (float)durationSeconds;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2;
- (id)humanReadableType;
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2;
- (_Bool)telemetryEnabled;
- (id)string1Name;
- (id)string1Value;
- (id)string2Name;
- (id)string2Value;
- (id)number1Name;
- (id)number1Value;
- (id)number2Name;
- (id)number2Value;
- (long long)tv_sec;
- (int)tv_usec;
- (int)tz_minuteswest;
- (int)tz_dsttime;
- (void)_adjustBeginTimeVal:(struct timeval *)arg1;
- (void)_adjustEndTimeVal:(struct timeval *)arg1;
- (_Bool)_hasBeginTimeval;
- (_Bool)_hasEndTimeval;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(_Bool)arg3;
- (_Bool)beginTimezone:(struct timezone *)arg1;
- (_Bool)endTimezone:(struct timezone *)arg1;
- (id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
- (id)_eventDescriptions;

@end
