/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLModelConfiguration, MLModelDescription;

__attribute__((visibility("hidden")))
@interface _MLVNScenePrintCustomModel : NSObject

{
    int _scenePrintRequestRevision;
    MLModelDescription *_modelDescription;
    MLModelConfiguration *_configuration;
}

@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) int scenePrintRequestRevision;
@property (nonatomic, readonly) MLModelConfiguration *configuration;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;
- (id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2;

@end
