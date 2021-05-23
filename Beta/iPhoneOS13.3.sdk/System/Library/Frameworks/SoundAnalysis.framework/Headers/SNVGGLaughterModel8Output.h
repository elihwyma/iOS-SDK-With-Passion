/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGLaughterModel8Output : NSObject

{
    MLMultiArray *_output1;
}

@property (retain, nonatomic) MLMultiArray *output1;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithOutput1:(id)arg1;

@end
