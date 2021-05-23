/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PUImportOneUpViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUImportOneUpViewControllerSpecManager : PXFeatureSpecManager

{
    unsigned long long _style;
}

@property (nonatomic, readonly) PUImportOneUpViewControllerSpec *spec;
@property (nonatomic, readonly) unsigned long long style;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)createSpec;
- (Class)specClass;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;

@end
