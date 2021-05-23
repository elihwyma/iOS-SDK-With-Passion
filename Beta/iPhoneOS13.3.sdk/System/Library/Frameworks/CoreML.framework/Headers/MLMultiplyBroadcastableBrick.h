/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLMultiplyBroadcastableBrick : NSObject

{
    _Bool _shapeInfoNeeded;
    NSArray *_inputRanks;
    NSArray *_outputRanks;
    NSArray *_inputShapes;
    NSArray *_outputShapes;
}

@property (nonatomic, readonly) _Bool shapeInfoNeeded;
@property (nonatomic, readonly) NSArray *inputRanks;
@property (nonatomic, readonly) NSArray *outputRanks;
@property (nonatomic, readonly) NSArray *inputShapes;
@property (nonatomic, readonly) NSArray *outputShapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithParameters:(id)arg1;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (_Bool)hasGPUSupport;

@end
