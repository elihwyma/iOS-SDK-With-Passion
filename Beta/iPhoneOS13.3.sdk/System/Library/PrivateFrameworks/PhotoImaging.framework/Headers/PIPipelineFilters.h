/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIPipelineFilters : NSObject

+ (id)preGeometryFilter;
+ (id)stripAllTimeAdjustmentsFilter;
+ (id)autoloopStabilizedVideoFilter;
+ (id)overcaptureSourceFilter;
+ (id)noMuteFilter;
+ (id)noTrimFilter;
+ (id)autoCropFilter;
+ (id)exifOrientationAndCropStraightenOnly;
+ (id)rawFaceBalanceFilter;
+ (id)rawSourceFilterIncludingOrientation;
+ (id)sourceFilterNoOrientation;
+ (id)sushiLevel1Filter;
+ (id)noRedEyeFilter;
+ (id)noCropFilter;
+ (id)iosCropToolFilter;
+ (id)noGeometryFilter;
+ (id)perspectiveStraightenWithoutCropFilter;
+ (id)postGeometryFilter;
+ (id)inputToCropFilter;
+ (id)stopAtTagIncludeGeometryFilter:(id)arg1;
+ (id)stopAtTagIncludeOrientationFilter:(id)arg1;
+ (id)applyOrientationFilter;
+ (id)primarySourceFilter;
+ (id)spatialOvercaptureVideoSourceFilter;
+ (id)socPseudoColorFilter;

@end
