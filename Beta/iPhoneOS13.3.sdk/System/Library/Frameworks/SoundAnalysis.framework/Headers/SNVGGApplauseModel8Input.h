/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGApplauseModel8Input : NSObject

{
    MLMultiArray *_input1;
}

@property (retain, nonatomic) MLMultiArray *input1;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithInput1:(id)arg1;

@end
