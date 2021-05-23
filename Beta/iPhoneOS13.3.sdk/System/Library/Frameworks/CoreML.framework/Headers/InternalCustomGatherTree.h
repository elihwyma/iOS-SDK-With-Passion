/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface InternalCustomGatherTree : NSObject

{
    vector_12bd641b _shape;
}

@property (nonatomic, readonly) vector_12bd641b shape;

- (id).cxx_construct;
- (_Bool)setWeightData:(id)arg1 error:(id *)arg2;
- (id)initWithParameterDictionary:(id)arg1 error:(id *)arg2;
- (id)outputShapesForInputShapes:(id)arg1 error:(id *)arg2;
- (_Bool)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id *)arg3;

@end
