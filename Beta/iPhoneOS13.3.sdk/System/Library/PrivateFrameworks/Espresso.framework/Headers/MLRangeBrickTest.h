/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MLRangeBrickTest : NSObject

{
    int _size;
    int _start;
    int _stepSize;
}

@property (nonatomic, readonly) int size;
@property (nonatomic, readonly) int start;
@property (nonatomic, readonly) int stepSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithParameters:(id)arg1;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (_Bool)hasDynamicOutputShape:(unsigned long long)arg1;
- (id)computeDynamicOutputShape:(id)arg1;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (_Bool)hasGPUSupport;

@end
