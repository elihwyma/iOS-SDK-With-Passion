/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNTechnique;

@interface SCNPass : NSObject

{
    struct __C3DFXPass *_fxPass;
    SCNTechnique *_technique;
}

@property (copy, nonatomic) CDUnknownBlockType initializationHandler;
@property (copy, nonatomic) CDUnknownBlockType executionHandler;

- (void)dealloc;
- (void)invalidate;
- (id)initWithFXPass:(struct __C3DFXPass *)arg1 technique:(id)arg2;
- (void)setValue:(id)arg1 forPassPropertyKey:(long long)arg2;
- (id)valueForPassPropertyKey:(long long)arg1;

@end
