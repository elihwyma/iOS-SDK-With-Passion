/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class PKRegion, UIBezierPath;

@interface UIRegion : NSObject <Swift>

{
    PKRegion *_region;
}

@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) PKRegion *_region;

+ (id)infiniteRegion;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (id)initWithRadius:(double)arg1;
- (id)inverseRegion;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (void)containsPoints:(const float *)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;

@end
