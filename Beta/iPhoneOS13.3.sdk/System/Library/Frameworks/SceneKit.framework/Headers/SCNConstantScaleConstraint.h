/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@interface SCNConstantScaleConstraint : SCNConstraint

{
    float _scale;
    _Bool _screenSpace;
}

@property (nonatomic) float scale;
@property (nonatomic) _Bool screenSpace;

+ (_Bool)supportsSecureCoding;
+ (id)constantScaleConstraint;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
