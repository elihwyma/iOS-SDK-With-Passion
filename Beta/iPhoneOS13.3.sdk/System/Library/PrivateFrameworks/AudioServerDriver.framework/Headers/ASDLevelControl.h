/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/ASDControl.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface ASDLevelControl : ASDControl

{
    float _decibelValue;
    float _minimumDecibelValue;
    float _maximumDecibelValue;
    NSObject<OS_dispatch_queue> *_valueQueue;
    _Bool _settable;
}

@property (nonatomic) float decibelValue;
@property (nonatomic) float minimumDecibelValue;
@property (nonatomic) float maximumDecibelValue;
@property (nonatomic) float scalarValue;
@property (nonatomic, readonly, getter=isSettable) _Bool settable;

+ (id)volumeControlWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(_Bool)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7;

- (_Bool)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (id)initWithPlugin:(id)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (_Bool)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (unsigned int)baseClass;
- (id)driverClassName;
- (_Bool)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (_Bool)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(_Bool)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7 andObjectClassID:(unsigned int)arg8;
- (float)decibelFromScalar:(float)arg1;
- (float)scalarFromDecibel:(float)arg1;
- (_Bool)changeScalarValue:(float)arg1;
- (_Bool)changeDecibelValue:(float)arg1;
- (float)_scalarFromDecibel:(float)arg1;
- (float)_decibelFromScalar:(float)arg1;
- (id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(_Bool)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7;

@end
