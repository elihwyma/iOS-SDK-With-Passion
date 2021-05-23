/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLModelDescription;

__attribute__((visibility("hidden")))
@interface _MLNLPWordTaggingModel : NSObject

{
    void *_wordTaggingModel;
    MLModelDescription *_modelDescription;
}

@property (retain) MLModelDescription *modelDescription;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end
