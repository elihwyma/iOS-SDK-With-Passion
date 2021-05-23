/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAssetsDataSourceManagerConfiguration.h>

@class PXAssetsDataSourceManager;

@interface _PXExplicitCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration

{
    PXAssetsDataSourceManager *_yearsAssetsDataSourceManager;
    PXAssetsDataSourceManager *_monthsAssetsDataSourceManager;
    PXAssetsDataSourceManager *_daysAssetsDataSourceManager;
}

- (id)configurationForZoomLevel:(long long)arg1;
- (id)initWithYearsAssetsDataSourceManager:(id)arg1 monthsAssetsDataSourceManager:(id)arg2 daysAssetsDataSourceManager:(id)arg3;

@end
