/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDView3D : NSObject

{
    int mRotationX;
    int mRotationY;
    int mDepthPercent;
    int mGapDepthPercent;
    int mHeightPercent;
    int mPerspective;
    _Bool mRightAngleAxes;
    _Bool mCluster;
    _Bool mAutoscale;
}

- (id)init;
- (id)description;
- (_Bool)isCluster;
- (int)perspective;
- (void)setPerspective:(int)arg1;
- (int)rotationX;
- (void)setRotationX:(int)arg1;
- (int)rotationY;
- (void)setRotationY:(int)arg1;
- (void)setRightAngleAxes:(_Bool)arg1;
- (void)setDepthPercent:(int)arg1;
- (void)setGapDepthPercent:(int)arg1;
- (void)setHeightPercent:(int)arg1;
- (void)setAutoscale:(_Bool)arg1;
- (void)setCluster:(_Bool)arg1;
- (int)depthPercent;
- (int)gapDepthPercent;
- (int)heightPercent;
- (_Bool)isAutoscale;
- (_Bool)isRightAngleAxes;

@end
