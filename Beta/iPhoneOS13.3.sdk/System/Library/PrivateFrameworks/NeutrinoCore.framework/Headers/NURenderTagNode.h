/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@class NSString;

@interface NURenderTagNode : NURenderNode

{
    NSString *_name;
}

@property (readonly) NSString *name;
@property (retain) NURenderNode *input;

+ (_Bool)validateName:(id)arg1 error:(out id *)arg2;

- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)descriptionSubClassHook;
- (id)_descriptionWithOffset:(long long)arg1 showInputs:(_Bool)arg2;
- (id)initWithInput:(id)arg1 name:(id)arg2;

@end
