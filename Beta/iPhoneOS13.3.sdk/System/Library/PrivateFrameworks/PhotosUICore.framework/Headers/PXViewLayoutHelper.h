/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol UICoordinateSpace;

@interface PXViewLayoutHelper : NSObject

{
    struct CGRect _containerBounds;
    id <UICoordinateSpace> _coordinateSpace;
    struct CGAffineTransform _transform;
    struct CGAffineTransform _reverseTransform;
}

+ (void)initialize;
+ (long long)userInterfaceLayoutDirection;
+ (void)setUserInterfaceLayoutDirection:(long long)arg1;
+ (void)performLayoutWithinView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (id)_init;
- (void)_tearDown;
- (void)layoutView:(id)arg1 withAttributes:(const CDStruct_05cddbcc *)arg2;
- (double)leadingOfView:(id)arg1;
- (double)horizontalCenterOfView:(id)arg1;
- (double)trailingOfView:(id)arg1;
- (double)topOfView:(id)arg1;
- (double)verticalCenterOfView:(id)arg1;
- (double)bottomOfView:(id)arg1;
- (double)firstBaselineOfView:(id)arg1;
- (double)lastBaselineOfView:(id)arg1;
- (void)_setUpWithView:(id)arg1;
- (struct CGRect)_orientedFrameOfView:(id)arg1;
- (void)_setOrientedFrame:(struct CGRect)arg1 forView:(id)arg2;
- (void)_getFirstBaseline:(double *)arg1 lastBaseline:(double *)arg2 forView:(id)arg3 withSize:(struct CGSize)arg4;

@end
