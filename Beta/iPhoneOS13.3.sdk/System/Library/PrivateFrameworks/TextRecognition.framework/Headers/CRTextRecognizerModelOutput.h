/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextRecognizerModelOutput : NSObject

{
    MLMultiArray *_output_label_prob_map;
}

@property (retain, nonatomic) MLMultiArray *output_label_prob_map;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithOutput_label_prob_map:(id)arg1;

@end
