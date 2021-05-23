/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@interface SignpostSupportMachTimeTranslationRange : NSObject

{
    unsigned long long _startMachAbsoluteTime;
    unsigned long long _endMachAbsoluteTime;
    unsigned long long _startMachContinuousTime;
    unsigned long long _endMachContinuousTime;
}

@property (nonatomic, readonly) unsigned long long startMachAbsoluteTime;
@property (nonatomic, readonly) unsigned long long endMachAbsoluteTime;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (nonatomic, readonly) long long absoluteMinusContinuousDelta;
@property (nonatomic, readonly) long long continuousMinusAbsoluteDelta;
@property (nonatomic, readonly) unsigned long long machContinuousTimeDuration;

- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithArrayRepresentation:(id)arg1;
- (_Bool)containsMachAbsoluteTime:(unsigned long long)arg1;
- (_Bool)containsMachContinuousTime:(unsigned long long)arg1;
- (_Bool)setEndMachAbsoluteTimestamp:(unsigned long long)arg1 endMachContinuousTime:(unsigned long long)arg2;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1;
- (id)initWithStartMachAbsoluteTime:(unsigned long long)arg1 startContinuousTime:(unsigned long long)arg2;
- (id)serializableArrayRepresentation;

@end
