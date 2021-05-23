/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class PKRegion;

@interface SKRegion : NSObject

{
    PKRegion *_region;
}

@property (nonatomic, readonly) const struct CGPath *path;

+ (_Bool)supportsSecureCoding;
+ (id)infiniteRegion;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(struct CGPath *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (id)initWithRadius:(float)arg1;
- (id)inverseRegion;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (void)containsPoints:(const float *)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (_Bool)isEqualToRegion:(id)arg1;
- (_Bool)isInfinite;

@end
