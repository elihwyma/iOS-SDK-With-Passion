/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MLRangeBrick : NSObject

{
    int _size;
    float _start;
    float _stepSize;
    float _startValueParameter;
    float _endValueParameter;
    float _stepSizeValueParameter;
}

@property (nonatomic, readonly) int size;
@property (nonatomic, readonly) float start;
@property (nonatomic, readonly) float stepSize;
@property (nonatomic, readonly) float startValueParameter;
@property (nonatomic, readonly) float endValueParameter;
@property (nonatomic, readonly) float stepSizeValueParameter;
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
