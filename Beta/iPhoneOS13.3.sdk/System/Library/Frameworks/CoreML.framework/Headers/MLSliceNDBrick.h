/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLSliceNDBrick : NSObject

{
    _Bool _shapeInfoNeeded;
    int _rank;
    NSArray *_begin_ids;
    NSArray *_begin_masks;
    NSArray *_end_ids;
    NSArray *_end_masks;
    NSArray *_strides;
    NSArray *_inputRanks;
    NSArray *_outputRanks;
    NSArray *_inputShapes;
    NSArray *_outputShapes;
}

@property (nonatomic, readonly) int rank;
@property (nonatomic, readonly) _Bool shapeInfoNeeded;
@property (nonatomic, readonly) NSArray *begin_ids;
@property (nonatomic, readonly) NSArray *begin_masks;
@property (nonatomic, readonly) NSArray *end_ids;
@property (nonatomic, readonly) NSArray *end_masks;
@property (nonatomic, readonly) NSArray *strides;
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
