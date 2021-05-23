/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXMemoriesSpec;

@interface PXMemoriesSpecManager : PXFeatureSpecManager

{
    unsigned long long _style;
}

@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) PXMemoriesSpec *spec;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)createSpec;
- (Class)specClass;
- (_Bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;

@end
