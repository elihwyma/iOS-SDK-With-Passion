/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class SNDSPGraphCustomModel;

__attribute__((visibility("hidden")))
@interface _SNVGGishFrontEndProcessingCustomModel : NSObject

{
    SNDSPGraphCustomModel *_model;
}

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end
