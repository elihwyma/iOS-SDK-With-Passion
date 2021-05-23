/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLObject.h>

#import <ModelIO/Swift-Protocol.h>

@class MDLMatrix4x4Array, NSArray;

@interface MDLSkeleton : MDLObject <Swift>

{
    NSArray *_jointPaths;
    MDLMatrix4x4Array *_jointBindTransforms;
    MDLMatrix4x4Array *_jointRestTransforms;
}

@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) MDLMatrix4x4Array *jointBindTransforms;
@property (nonatomic, readonly) MDLMatrix4x4Array *jointRestTransforms;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;

@end
