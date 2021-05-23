/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@class PXAssetsDataSource;

@interface PXCuratedLibraryInlineHeadersDataSource : PXSectionedDataSource

{
    long long _numberOfSections;
    unsigned long long _level;
    CDStruct_68723fc0 *_sectionInfos;
    PXAssetsDataSource *_assetsDataSource;
}

@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) CDStruct_68723fc0 *sectionInfos;
@property (nonatomic, readonly) PXAssetsDataSource *assetsDataSource;

- (void)dealloc;
- (id)initWithAssetsDataSource:(id)arg1 level:(unsigned long long)arg2 numberOfSections:(long long)arg3 sections:(CDStruct_68723fc0 *)arg4;

@end
