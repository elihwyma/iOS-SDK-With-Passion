/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface MDLSkinDeformer : NSObject <Swift>

{
    NSArray *_jointPaths;
    NSData *_jointBindTransforms;
    CDStruct_14d5dc5e _meshBindTransform;
}

@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) NSData *jointBindTransforms;
@property (nonatomic, readonly) CDStruct_14d5dc5e meshBindTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJointPaths:(id)arg1 jointBindTransforms:(id)arg2 meshBindTransform:(CDStruct_14d5dc5e)arg3;
- (unsigned long long)copyJointBindTransformsInto:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (id)initWithJointPaths:(id)arg1 jointBindTransforms:(const CDStruct_14d5dc5e *)arg2 count:(unsigned long long)arg3 meshBindTransform:(CDStruct_14d5dc5e)arg4;

@end
