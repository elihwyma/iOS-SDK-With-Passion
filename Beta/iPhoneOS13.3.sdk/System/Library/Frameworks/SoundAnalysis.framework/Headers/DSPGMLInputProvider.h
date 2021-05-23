/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLFeatureDescription, MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface DSPGMLInputProvider : NSObject

{
    MLFeatureDescription *_featureDescription;
    MLMultiArray *_input;
}

@property (retain, nonatomic) MLMultiArray *input;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithFeatureDescription:(id)arg1;

@end
