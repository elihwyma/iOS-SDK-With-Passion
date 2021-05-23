/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/ASDControl.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface ASDStereoPanControl : ASDControl

{
    float _value;
    NSObject<OS_dispatch_queue> *_valueQueue;
    unsigned int _leftPanChannel;
    unsigned int _rightPanChannel;
    _Bool _settable;
}

@property (nonatomic) float value;
@property (nonatomic) unsigned int leftPanChannel;
@property (nonatomic) unsigned int rightPanChannel;
@property (nonatomic, readonly, getter=isSettable) _Bool settable;

- (_Bool)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (_Bool)changeValue:(float)arg1;
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
- (id)initWithValue:(float)arg1 leftPanChannel:(unsigned int)arg2 rightPanChannel:(unsigned int)arg3 isSettable:(_Bool)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7 andObjectClassID:(unsigned int)arg8;
- (void)setPanChannel:(unsigned int)arg1 isLeft:(_Bool)arg2;
- (id)initWithValue:(float)arg1 leftPanChannel:(unsigned int)arg2 rightPanChannel:(unsigned int)arg3 isSettable:(_Bool)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7;

@end
