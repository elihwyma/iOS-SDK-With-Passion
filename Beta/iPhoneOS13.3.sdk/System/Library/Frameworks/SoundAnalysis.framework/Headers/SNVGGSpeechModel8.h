/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGSpeechModel8 : NSObject

{
    MLModel *_model;
}

@property (nonatomic, readonly) MLModel *model;

+ (id)urlOfModelInThisBundle;

- (id)init;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;

@end
