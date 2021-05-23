/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/ASDControl.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface ASDBooleanControl : ASDControl

{
    _Bool _value;
    NSObject<OS_dispatch_queue> *_valueQueue;
    _Bool _settable;
}

@property (nonatomic) _Bool value;
@property (nonatomic, readonly, getter=isSettable) _Bool settable;

+ (id)muteControlWithValue:(_Bool)arg1 isSettable:(_Bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)phantomPowerControlWithValue:(_Bool)arg1 isSettable:(_Bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)invertControlWithValue:(_Bool)arg1 isSettable:(_Bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)jackControlWithValue:(_Bool)arg1 isSettable:(_Bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;

- (_Bool)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (_Bool)changeValue:(_Bool)arg1;
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
- (id)initWithValue:(_Bool)arg1 isSettable:(_Bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5 andObjectClassID:(unsigned int)arg6;
- (id)initWithValue:(_Bool)arg1 isSettable:(_Bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;

@end
