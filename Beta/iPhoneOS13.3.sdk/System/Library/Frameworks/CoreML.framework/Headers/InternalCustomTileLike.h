/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface InternalCustomTileLike : NSObject

{
    unsigned long long _inputRank;
    vector_06e666a8 _multiples;
    vector_06e666a8 _inputShape;
    vector_06e666a8 _outputShape;
}

@property (nonatomic, readonly) unsigned long long inputRank;
@property (nonatomic, readonly) vector_06e666a8 multiples;
@property (nonatomic, readonly) vector_06e666a8 inputShape;
@property (nonatomic, readonly) vector_06e666a8 outputShape;

- (id).cxx_construct;
- (_Bool)setWeightData:(id)arg1 error:(id *)arg2;
- (id)initWithParameterDictionary:(id)arg1 error:(id *)arg2;
- (id)outputShapesForInputShapes:(id)arg1 error:(id *)arg2;
- (_Bool)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id *)arg3;

@end
