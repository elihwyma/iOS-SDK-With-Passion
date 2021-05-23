/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class HUGridCameraCellLayoutOptions, HUGridHeadlineCellLayoutOptions, HUGridSceneCellLayoutOptions, HUGridServiceCellLayoutOptions, HUGridStatusBannerCellLayoutOptions, HUNavigationBarLayoutOptions, NSNumber, NSString, UIFont;

@interface HUGridLayoutOptions : NSObject <Swift>

{
    _Bool _headlineHidden;
    _Bool _statusHidden;
    _Bool _editing;
    unsigned long long _contentColorStyle;
    long long _scrollDirection;
    unsigned long long _columnStyle;
    UIFont *_headlineFont;
    UIFont *_statusItemFont;
    UIFont *_statusDetailsFont;
    UIFont *_sectionHeaderFont;
    double _headlineBaselineToFirstStatusItemBaselineDistance;
    double _topOfViewToFirstStatusItemBaselineDistance;
    unsigned long long _maxStatusItemCount;
    unsigned long long _maxStatusItemNumberOfLines;
    double _statusItemBaselineToNextStatusItemBaselineDistance;
    double _lastStatusItemBaselineToStatusDetailsBaselineDistance;
    double _statusDetailsBaselineToFirstSectionTitleBaselineDistance;
    double _headlineBaselineToSceneHeaderBaselineDistance;
    double _sectionTopMargin;
    double _sectionBottomMargin;
    double _sectionLeadingMargin;
    double _sectionTrailingMargin;
    double _sectionBottomToNextSectionTitleBaselineDistance;
    double _minimumMarginBelowHeadline;
    double _minimumMarginBelowStatus;
    double _rowSpacing;
    double _columnSpacing;
    NSNumber *_overrideNumberOfColumns;
    HUGridCameraCellLayoutOptions *_cameraCellOptions;
    HUGridHeadlineCellLayoutOptions *_headlineCellOptions;
    HUGridSceneCellLayoutOptions *_sceneCellOptions;
    HUGridServiceCellLayoutOptions *_serviceCellOptions;
    HUNavigationBarLayoutOptions *_navigationBarOptions;
    HUGridStatusBannerCellLayoutOptions *_statusBannerCellOptions;
    long long _numberOfCameraCellsPerRow;
    NSNumber *_overrideViewSizeSubclass;
    struct CGSize _viewSize;
    struct UIEdgeInsets _sectionTitleMargin;
}

@property (retain, nonatomic) NSNumber *overrideViewSizeSubclass;
@property (nonatomic, readonly) struct CGSize viewSize;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) unsigned long long columnStyle;
@property (nonatomic) _Bool headlineHidden;
@property (nonatomic) _Bool statusHidden;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (retain, nonatomic) UIFont *headlineFont;
@property (retain, nonatomic) UIFont *statusItemFont;
@property (retain, nonatomic) UIFont *statusDetailsFont;
@property (retain, nonatomic) UIFont *sectionHeaderFont;
@property (nonatomic) double headlineBaselineToFirstStatusItemBaselineDistance;
@property (nonatomic) double topOfViewToFirstStatusItemBaselineDistance;
@property (nonatomic) unsigned long long maxStatusItemCount;
@property (nonatomic) unsigned long long maxStatusItemNumberOfLines;
@property (nonatomic) double statusItemBaselineToNextStatusItemBaselineDistance;
@property (nonatomic) double lastStatusItemBaselineToStatusDetailsBaselineDistance;
@property (nonatomic) double statusDetailsBaselineToFirstSectionTitleBaselineDistance;
@property (nonatomic) double headlineBaselineToSceneHeaderBaselineDistance;
@property (nonatomic) double sectionTopMargin;
@property (nonatomic) double sectionBottomMargin;
@property (nonatomic) double sectionLeadingMargin;
@property (nonatomic) double sectionTrailingMargin;
@property (nonatomic) double sectionBottomToNextSectionTitleBaselineDistance;
@property (nonatomic) struct UIEdgeInsets sectionTitleMargin;
@property (nonatomic) double minimumMarginBelowHeadline;
@property (nonatomic) double minimumMarginBelowStatus;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double columnSpacing;
@property (retain, nonatomic) NSNumber *overrideNumberOfColumns;
@property (copy, nonatomic) HUGridCameraCellLayoutOptions *cameraCellOptions;
@property (copy, nonatomic) HUGridHeadlineCellLayoutOptions *headlineCellOptions;
@property (copy, nonatomic) HUGridSceneCellLayoutOptions *sceneCellOptions;
@property (copy, nonatomic) HUGridServiceCellLayoutOptions *serviceCellOptions;
@property (copy, nonatomic) HUNavigationBarLayoutOptions *navigationBarOptions;
@property (copy, nonatomic) HUGridStatusBannerCellLayoutOptions *statusBannerCellOptions;
@property (nonatomic, readonly) long long viewSizeSubclass;
@property (nonatomic, readonly) long long cellSizeSubclass;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) double pointWidthForCurrentViewSizeSubclass;
@property (nonatomic, readonly) double pointWidthForFullWidthCell;
@property (nonatomic, readonly) double cameraCellWidth;
@property (nonatomic, readonly) double cameraCellHeight;
@property (nonatomic, readonly) long long numberOfCameraCellsPerRow;
@property (nonatomic, readonly) double headlineCellHeight;
@property (nonatomic, readonly) double statusListCellHeight;
@property (nonatomic, readonly) double sectionHeaderCellHeight;
@property (nonatomic, readonly) double statusListCellBottomMargin;
@property (nonatomic, readonly) double largeTitleCellTopMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long contentColorStyle;

+ (id)defaultOptionsForViewSize:(struct CGSize)arg1;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1 columnStyle:(unsigned long long)arg2;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3;
+ (unsigned long long)_numberOfColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1 overrideSizeSubclass:(long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)pointWidthForNumberOfColumns:(long long)arg1;
- (double)preferredSectionHeightForNumberOfServiceRows:(unsigned long long)arg1 spanningColumns:(unsigned long long)arg2;
- (id)initWithViewSize:(struct CGSize)arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3;
- (id)_childDisplayOptions;
- (double)_pointWidthForFractionalNumberOfColumns:(double)arg1;
- (double)_pointWidthForFixedColumnStyleWithFractionalNumberOfColumns:(double)arg1;
- (double)_pointWidthForFlexibleColumnStyleWithFractionalNumberOfColumns:(double)arg1 totalNumberOfColumns:(long long)arg2 totalWidth:(double)arg3;
- (double)_preferredSectionHeightForNumberOfRows:(unsigned long long)arg1 withCellHeight:(double)arg2;
- (double)statusListCellTopMargin:(_Bool)arg1 forStatusBannerWidth:(double)arg2 havingTitleAndDescription:(id)arg3 contentSizeCategory:(id)arg4;
- (double)preferredSectionHeightForNumberOfSceneRows:(unsigned long long)arg1;

@end
