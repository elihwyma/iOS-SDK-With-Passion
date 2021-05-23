/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

@class AVHapticPlayerParameterCurve;

@interface AVHapticEvent : NSObject

{
    double _time;
    double _duration;
    _Bool _isParameter;
    unsigned long long _eventCategory;
    union {
        unsigned long long _eventType;
        unsigned long long _paramType;
    } _u;
    struct AVHapticPlayerFixedParameter _fixedParams[8];
    AVHapticPlayerParameterCurve *_paramCurve;
    long long _fixedParamCount;
    float _value;
}

@property (readonly) double time;
@property (readonly) double duration;
@property (readonly) _Bool isParameter;
@property (readonly) unsigned long long eventCategory;
@property (readonly) unsigned long long eventType;
@property (readonly) unsigned long long paramType;
@property (readonly) float value;
@property (readonly) struct AVHapticPlayerFixedParameter *fixedParams;
@property (readonly) AVHapticPlayerParameterCurve *parameterCurve;
@property (readonly) long long fixedParamCount;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3;
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(long long)arg4 duration:(double)arg5;
- (id)initWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3;
- (id)initWithParameterCurve:(id)arg1;

@end
