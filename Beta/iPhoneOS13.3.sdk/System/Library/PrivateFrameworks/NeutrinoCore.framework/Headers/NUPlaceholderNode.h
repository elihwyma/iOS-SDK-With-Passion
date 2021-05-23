/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@interface NUPlaceholderNode : NURenderNode

- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)initWithInputs:(struct NSDictionary *)arg1;
- (_Bool)isPlaceholderNode;

@end
