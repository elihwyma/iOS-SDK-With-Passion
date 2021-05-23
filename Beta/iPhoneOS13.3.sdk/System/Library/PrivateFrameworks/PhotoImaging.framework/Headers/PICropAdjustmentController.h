/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@interface PICropAdjustmentController : PIAdjustmentController

@property (nonatomic) struct CGRect cropRect;
@property (nonatomic) long long constraintWidth;
@property (nonatomic) long long constraintHeight;
@property (nonatomic) double angle;
@property (nonatomic) double angleRadians;
@property (nonatomic) double pitch;
@property (nonatomic) double pitchRadians;
@property (nonatomic) double yaw;
@property (nonatomic) double yawRadians;
@property (nonatomic) _Bool autoCropped;
@property (nonatomic, getter=isSmart) _Bool smart;
@property (nonatomic, getter=isOriginalCrop) _Bool originalCrop;

+ (id)yawKey;
+ (id)pitchKey;
+ (id)angleKey;
+ (id)originalCropKey;
+ (id)smartKey;
+ (id)heightKey;
+ (id)widthKey;
+ (id)yOriginKey;
+ (id)xOriginKey;
+ (id)constraintHeightKey;
+ (id)constraintWidthKey;

- (_Bool)isCropIdentityForImageSize:(struct CGSize)arg1;
- (id)initWithAdjustment:(id)arg1;
- (id)visualInputKeys;
- (_Bool)isSettingEqual:(id)arg1 forKey:(id)arg2;
- (_Bool)isGeometryIdentityForImageSize:(struct CGSize)arg1;
- (_Bool)isCropConstrained;

@end
