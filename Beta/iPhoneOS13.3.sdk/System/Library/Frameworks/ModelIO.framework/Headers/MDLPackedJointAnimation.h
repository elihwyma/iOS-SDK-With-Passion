/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLObject.h>

#import <ModelIO/Swift-Protocol.h>

@class MDLAnimatedQuaternionArray, MDLAnimatedVector3Array, NSArray;

@interface MDLPackedJointAnimation : MDLObject <Swift>

{
    NSArray *_jointPaths;
    MDLAnimatedVector3Array *_translations;
    MDLAnimatedQuaternionArray *_rotations;
    MDLAnimatedVector3Array *_scales;
}

@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) MDLAnimatedVector3Array *translations;
@property (nonatomic, readonly) MDLAnimatedQuaternionArray *rotations;
@property (nonatomic, readonly) MDLAnimatedVector3Array *scales;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;

@end
