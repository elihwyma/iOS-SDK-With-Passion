/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@interface SCNBillboardConstraint : SCNConstraint

{
    unsigned long long _freeAxes;
    _Bool _preserveScale;
}

@property (nonatomic) unsigned long long freeAxes;

+ (_Bool)supportsSecureCoding;
+ (id)billboardConstraint;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPreserveScale:(_Bool)arg1;
- (_Bool)preserveScale;

@end
