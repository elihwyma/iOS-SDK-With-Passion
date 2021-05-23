/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXRelatedSpec;

@interface PXRelatedSpecManager : PXFeatureSpecManager

@property (nonatomic, readonly) PXRelatedSpec *spec;

- (Class)specClass;

@end
