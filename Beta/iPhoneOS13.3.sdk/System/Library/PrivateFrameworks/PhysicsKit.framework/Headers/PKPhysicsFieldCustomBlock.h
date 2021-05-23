/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <PhysicsKit/PKPhysicsField.h>

@interface PKPhysicsFieldCustomBlock : PKPhysicsField

{
    CDUnknownBlockType _batchBlock;
    CDUnknownBlockType _block;
}

+ (id)fieldWithCustomBatchBlock:(CDUnknownBlockType)arg1;
+ (id)fieldWithCustomBlock:(CDUnknownBlockType)arg1;

- (id)initWithCustomBlock:(CDUnknownBlockType)arg1;
- (id)initWithCustomBatchBlock:(CDUnknownBlockType)arg1;

@end
