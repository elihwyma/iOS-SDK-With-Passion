/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGItemsLayout.h>

@class NSCalendar, NSDateFormatter, NSString, PXCuratedLibraryInlineHeadersDataSource, PXCuratedLibraryInlineHeadersLayoutSpec;

@protocol PXCuratedLibraryInlineHeadersLayoutGeometrySource;

@interface PXInlineHeadersSpriteLayout : PXGItemsLayout

{
    CDStruct_d97c9657 _updateFlags;
    NSDateFormatter *_yearFormatter;
    NSDateFormatter *_monthFormatter;
    NSCalendar *_calendar;
    unsigned short _mediaVersion;
    _Bool _didHideSprites;
    unsigned long long _level;
    unsigned long long _style;
    PXCuratedLibraryInlineHeadersLayoutSpec *_spec;
    PXCuratedLibraryInlineHeadersDataSource *_dataSource;
    id <PXCuratedLibraryInlineHeadersLayoutGeometrySource> _geometrySource;
}

@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) PXCuratedLibraryInlineHeadersLayoutSpec *spec;
@property (retain, nonatomic) PXCuratedLibraryInlineHeadersDataSource *dataSource;
@property (weak, nonatomic) id <PXCuratedLibraryInlineHeadersLayoutGeometrySource> geometrySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)update;
- (id)initWithLevel:(unsigned long long)arg1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)_updateSprites;
- (void)visibleRectDidChange;
- (void)screenScaleDidChange;
- (void)alphaDidChange;
- (void)invalidateAnchorItemFrames;
- (void)_setupDateFormatters;
- (void)_currentLocaleChanged:(id)arg1;
- (void)_bumpMediaVersion;

@end
