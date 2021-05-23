/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface ASDDSPGraph : NSObject

{
    shared_ptr_f6ac7592 _graph;
}

@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) long long numberOfInputs;
@property (nonatomic, readonly) long long numberOfOutputs;
@property (nonatomic, readonly) long long sliceDurationInSamples;
@property (nonatomic, readonly) _Bool configured;
@property (nonatomic, readonly) _Bool initialized;
@property (nonatomic, readonly) NSSet *boxes;

- (id)init;
- (_Bool)initialize;
- (_Bool)reset;
- (id).cxx_construct;
- (_Bool)configure;
- (_Bool)unconfigure;
- (_Bool)setAUStrip:(id)arg1;
- (_Bool)setPropertyStrip:(id)arg1;
- (id)initWithDSPGraph:(shared_ptr_f6ac7592)arg1;
- (_Bool)setVariableSliceDuration:(long long)arg1 forSampleRate:(long long)arg2;
- (_Bool)uninitialize;
- (_Bool)getParameter:(float *)arg1 forID:(unsigned int)arg2;
- (_Bool)hasParameter:(unsigned int)arg1;
- (_Bool)setParameter:(float)arg1 forID:(unsigned int)arg2;
- (_Bool)getPropertySize:(unsigned int *)arg1 isWritable:(_Bool *)arg2 forID:(unsigned int)arg3;
- (_Bool)getProperty:(void *)arg1 withSize:(unsigned int *)arg2 forID:(unsigned int)arg3;
- (_Bool)setProperty:(const void *)arg1 withSize:(unsigned int)arg2 forID:(unsigned int)arg3;
- (id)boxWithName:(id)arg1;

@end
