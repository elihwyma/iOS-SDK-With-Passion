/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class MDLSkeleton, NSArray, NSString;

@protocol MDLJointAnimation;

@interface MDLAnimationBindComponent : NSObject <Swift>

{
    MDLSkeleton *_skeleton;
    id <MDLJointAnimation> _jointAnimation;
    NSArray *_jointPaths;
    CDStruct_14d5dc5e _geometryBindTransform;
}

@property (retain, nonatomic) MDLSkeleton *skeleton;
@property (retain, nonatomic) id <MDLJointAnimation> jointAnimation;
@property (retain, nonatomic) NSArray *jointPaths;
@property (nonatomic) CDStruct_14d5dc5e geometryBindTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
