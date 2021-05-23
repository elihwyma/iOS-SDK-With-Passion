/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class UIFontDescriptor;

@protocol VideosExtrasMainMenuSectionMetricsDataSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasMainMenuSectionMetrics : NSObject

{
    double _fittingWidth;
    _Bool _needsUpdate;
    long long _itemCount;
    struct CGSize *_calculatedSizes;
    id <VideosExtrasMainMenuSectionMetricsDataSource> _dataSource;
    UIFontDescriptor *_desiredFontDescriptor;
    UIFontDescriptor *_minimumFontDescriptor;
    double _desiredCellSpacing;
    double _minimumCellSpacing;
    double _desiredWidth;
    UIFontDescriptor *_fittingFontDescriptor;
    double _fittingCellSpacing;
    struct CGSize _totalFittingSize;
}

@property (weak, nonatomic) id <VideosExtrasMainMenuSectionMetricsDataSource> dataSource;
@property (retain, nonatomic) UIFontDescriptor *desiredFontDescriptor;
@property (retain, nonatomic) UIFontDescriptor *minimumFontDescriptor;
@property (nonatomic) double desiredCellSpacing;
@property (nonatomic) double minimumCellSpacing;
@property (nonatomic) double desiredWidth;
@property (nonatomic, readonly) UIFontDescriptor *fittingFontDescriptor;
@property (nonatomic, readonly) double fittingCellSpacing;
@property (nonatomic, readonly) struct CGSize totalFittingSize;

- (void)dealloc;
- (void)_setNeedsUpdate;
- (struct CGSize)sizeForCellAtIndex:(long long)arg1;
- (void)_updateAllMetrics;
- (void)_recalculateSizes;
- (struct CGSize)_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(double)arg2 itemCount:(long long)arg3 itemSizes:(out struct CGSize *)arg4;
- (void)setFittingWidth:(double)arg1;
- (void)updateSizes;

@end
