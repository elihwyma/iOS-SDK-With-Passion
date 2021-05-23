/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@interface LPTestingOverrides : NSObject

+ (void)reset;
+ (id)customLoader;
+ (unsigned long long)forceImageLoadingScaleFactor;
+ (id)forceContentSizeCategory;
+ (_Bool)forceRTL;
+ (id)forceSubsampleImagesToScreenSize;
+ (void)setForceRTL:(_Bool)arg1;
+ (void)setForceImageLoadingScaleFactor:(unsigned long long)arg1;
+ (void)setForceSubsampleImagesToScreenSize:(id)arg1;
+ (void)setForceContentSizeCategory:(id)arg1;
+ (void)setCustomLoader:(id)arg1;

@end
