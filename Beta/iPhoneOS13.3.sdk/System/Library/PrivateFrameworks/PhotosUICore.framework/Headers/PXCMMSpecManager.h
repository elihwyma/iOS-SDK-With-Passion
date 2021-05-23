/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXCMMSpec;

@interface PXCMMSpecManager : PXFeatureSpecManager

{
    unsigned long long _activityType;
}

@property (nonatomic, readonly) PXCMMSpec *spec;
@property (nonatomic, readonly) unsigned long long activityType;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 activityType:(unsigned long long)arg2;

@end
