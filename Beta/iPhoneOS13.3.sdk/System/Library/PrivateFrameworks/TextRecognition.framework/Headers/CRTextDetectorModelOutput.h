/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelOutput : NSObject

{
    MLMultiArray *_f_score_act_sigmoid_output;
    MLMultiArray *_geometry_output;
}

@property (retain, nonatomic) MLMultiArray *f_score_act_sigmoid_output;
@property (retain, nonatomic) MLMultiArray *geometry_output;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithF_score_act_sigmoid_output:(id)arg1 geometry_output:(id)arg2;

@end
