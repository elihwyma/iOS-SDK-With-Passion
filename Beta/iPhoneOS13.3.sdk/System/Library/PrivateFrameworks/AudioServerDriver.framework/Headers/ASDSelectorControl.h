/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/ASDControl.h>

@class NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

@interface ASDSelectorControl : ASDControl

{
    unsigned int _selectedValue;
    NSMutableArray *_values;
    NSObject<OS_dispatch_queue> *_valueQueue;
    _Bool _settable;
}

@property (nonatomic) unsigned int selectedValue;
@property (nonatomic, readonly, getter=isSettable) _Bool settable;

- (id)values;
- (void)addValue:(id)arg1;
- (void)removeValue:(id)arg1;
- (_Bool)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (_Bool)changeValue:(unsigned int)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (_Bool)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (unsigned int)baseClass;
- (id)driverClassName;
- (_Bool)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (_Bool)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (id)initWithIsSettable:(_Bool)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4;
- (id)initWithIsSettable:(_Bool)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 andObjectClassID:(unsigned int)arg5;
- (id)initWithIsSettable:(_Bool)arg1 withPlugin:(id)arg2;
- (id)nameForValue:(unsigned int)arg1;

@end
