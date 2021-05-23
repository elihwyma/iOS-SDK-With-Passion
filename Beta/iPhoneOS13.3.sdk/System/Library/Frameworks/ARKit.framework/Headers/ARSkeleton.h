/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARSkeletonDefinition;

@interface ARSkeleton : NSObject

{
    ARSkeletonDefinition *_definition;
    unsigned long long _jointCount;
}

@property (nonatomic, readonly) ARSkeletonDefinition *definition;
@property (nonatomic, readonly) unsigned long long jointCount;

- (id)initPrivate;
- (_Bool)isJointTracked:(long long)arg1;

@end
