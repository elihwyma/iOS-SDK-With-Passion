/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <AudioToolboxCore/AUParameterNode.h>

@class NSArray, NSString, _AUStaticParameterInfo;

@interface AUParameter : AUParameterNode

{
    _Bool __localValueStale;
    float _value;
    int _numUIObservers;
    int _numRecordingObservers;
    unsigned long long _address;
    NSArray *_dependentParameters;
    _AUStaticParameterInfo *_info;
}

@property (nonatomic) unsigned long long address;
@property (retain, nonatomic) _AUStaticParameterInfo *info;
@property (nonatomic) _Bool _localValueStale;
@property (nonatomic) int numUIObservers;
@property (nonatomic) int numRecordingObservers;
@property (nonatomic, readonly) float minValue;
@property (nonatomic, readonly) float maxValue;
@property (nonatomic, readonly) unsigned int unit;
@property (copy, nonatomic, readonly) NSString *unitName;
@property (nonatomic, readonly) unsigned int flags;
@property (copy, nonatomic, readonly) NSArray *valueStrings;
@property (copy, nonatomic, readonly) NSArray *dependentParameters;
@property (nonatomic) float value;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)_observersChanged:(_Bool)arg1 deltaCount:(int)arg2;
- (void)setValue:(float)arg1 extOriginator:(struct AUParameterObserverExtendedToken)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;
- (unsigned int)_clumpID;
- (id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
- (float)_internalValue;
- (void)setValue:(float)arg1 originator:(void *)arg2;
- (void)setValue:(float)arg1 originator:(void *)arg2 atHostTime:(unsigned long long)arg3;
- (void)setValue:(float)arg1 originator:(void *)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;
- (id)stringFromValue:(const float *)arg1;
- (float)valueFromString:(id)arg1;
- (void)set_clumpID:(unsigned int)arg1;

@end
