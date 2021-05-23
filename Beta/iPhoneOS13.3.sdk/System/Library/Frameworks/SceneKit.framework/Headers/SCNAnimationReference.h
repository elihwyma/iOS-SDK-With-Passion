/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <QuartzCore/CAAnimationGroup.h>

@class NSString;

@interface SCNAnimationReference : CAAnimationGroup

{
    NSString *referenceName;
}

@property (copy, nonatomic) NSString *referenceName;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isAReference;

@end
