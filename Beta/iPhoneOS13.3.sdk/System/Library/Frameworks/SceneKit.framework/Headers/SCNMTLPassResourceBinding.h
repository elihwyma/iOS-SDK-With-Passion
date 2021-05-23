/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNMTLResourceBinding.h>

__attribute__((visibility("hidden")))
@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding

{
    struct {
        struct __C3DFXPassInput *_field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_inputs;
    struct __C3DFXPassInput *_samplerInput;
    long long inputsCount;
    long long bufferSize;
}

@property (nonatomic) long long inputsCount;
@property (nonatomic) long long bufferSize;

- (id)init;
- (void)dealloc;

@end
