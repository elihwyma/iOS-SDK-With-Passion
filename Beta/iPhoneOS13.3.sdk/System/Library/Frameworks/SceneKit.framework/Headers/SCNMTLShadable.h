/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNMTLShadable : NSObject

{
    id _vertexBuffers[31];
    id _fragmentBuffers[31];
    id _vertexTextures[31];
    id _fragmentTextures[31];
    id _vertexSamplers[16];
    id _fragmentSamplers[16];
    long long materialModificationCount;
    long long geometryModificationCount;
}

@property (nonatomic) long long materialModificationCount;
@property (nonatomic) long long geometryModificationCount;

- (void)dealloc;
- (void)setResource:(id)arg1 ofType:(unsigned long long)arg2 atIndices:(CDStruct_21854d8c)arg3;
- (id)bufferAtIndices:(CDStruct_21854d8c)arg1;
- (id)textureAtIndices:(CDStruct_21854d8c)arg1;
- (id)samplerAtIndices:(CDStruct_21854d8c)arg1;

@end
