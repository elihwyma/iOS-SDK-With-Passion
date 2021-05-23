/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@interface PXPlacesMapPipelineFactory : NSObject

+ (id)defaultPipelineForDataSource:(id)arg1;
+ (id)pinPipelineForDataSource:(id)arg1;
+ (id)thumbnailPipelineForDataSource:(id)arg1 extendedTraitCollection:(id)arg2 geotaggableInfo:(id)arg3;
+ (id)thumbnailPipelineForDataSource:(id)arg1 extendedTraitCollection:(id)arg2 geotaggableInfo:(id)arg3 popoverImageType:(unsigned long long)arg4;

@end
