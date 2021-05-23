/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGSplitLayout.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCuratedLibraryInlineHeadersDataSourceManager, PXCuratedLibraryInlineHeadersLayoutSpec, PXInlineHeadersSpriteLayout;

@protocol PXCuratedLibraryInlineHeadersLayoutGeometrySource;

@interface PXCuratedLibraryInlineHeadersLayout : PXGSplitLayout <Swift>

{
    CDStruct_d97c9657 _updateFlags;
    PXInlineHeadersSpriteLayout *_yearsLayout;
    PXInlineHeadersSpriteLayout *_monthsLayout;
    PXCuratedLibraryInlineHeadersDataSourceManager *_dataSourceManager;
    PXCuratedLibraryInlineHeadersLayoutSpec *_spec;
    id <PXCuratedLibraryInlineHeadersLayoutGeometrySource> _geometrySource;
}

@property (nonatomic, readonly) PXCuratedLibraryInlineHeadersDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXCuratedLibraryInlineHeadersLayoutSpec *spec;
@property (nonatomic) double yearsAlpha;
@property (nonatomic) double monthsAlpha;
@property (weak, nonatomic) id <PXCuratedLibraryInlineHeadersLayoutGeometrySource> geometrySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)update;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithDataSourceManager:(id)arg1;
- (void)invalidateAnchorItemFrames;
- (void)_updateSublayouts;

@end
