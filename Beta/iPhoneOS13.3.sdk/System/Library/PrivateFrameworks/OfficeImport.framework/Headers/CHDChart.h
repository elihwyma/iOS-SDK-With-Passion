/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADGraphic.h>

@class CHDDefaultTextProperties, CHDLegend, CHDPlotArea, CHDTitle, CHDView3D, EDSheet, EDWorkbook, NSMutableArray, NSString, OADGraphicProperties, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface CHDChart : OADGraphic

{
    EDSheet *mSheet;
    int mStyleId;
    _Bool mAutoTitleDeleted;
    _Bool mPlotVisibleCellsOnly;
    _Bool mMSGraph;
    _Bool mHasSharedXValues;
    _Bool mDirectionChanged;
    _Bool mHasVisibleSeriesNames;
    int mDisplayBlankCellsAs;
    CHDPlotArea *mPlotArea;
    CHDView3D *mView3D;
    CHDTitle *mTitle;
    CHDLegend *mLegend;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mChartAreaGraphicProperties;
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mSideWallGraphicProperties;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDDefaultTextProperties *mDefaultTextProperties;
    int mChartDirection;
    struct CGRect mLogicalBounds;
    NSMutableArray *mDrawables;
    OADThemeOverrides *mThemeOverrides;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)binaryEffects:(_Bool)arg1;

- (id)init;
- (void)addChild:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)children;
- (void)removeChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)sheet;
- (id)defaultTextFont;
- (int)styleId;
- (void)setStyleId:(int)arg1;
- (_Bool)isBinary;
- (id)externalData;
- (void)setExternalData:(id)arg1;
- (id)processors;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (unsigned long long)categoryCount;
- (unsigned long long)childCount;
- (id)styleMatrix;
- (struct CGRect)logicalBounds;
- (id)workbook;
- (id)mainType;
- (id)plotArea;
- (id)chartAreaGraphicProperties;
- (id)legend;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setSideWallGraphicProperties:(id)arg1;
- (void)setBackWallGraphicProperties:(id)arg1;
- (void)setFloorGraphicProperties:(id)arg1;
- (void)setLegend:(id)arg1;
- (void)setView3D:(id)arg1;
- (void)setSheet:(id)arg1;
- (unsigned long long)defaultFontIndex;
- (int)defaultLabelPosition;
- (id)defaultThemeFont;
- (_Bool)isAutoTitleDeleted;
- (_Bool)isPlotVisibleCellsOnly;
- (int)displayBlankAs;
- (id)backWallGraphicProperties;
- (id)sideWallGraphicProperties;
- (id)floorGraphicProperties;
- (id)themeOverrides;
- (id)defaultDataLabelFont;
- (id)defaultSeriesTitleFont;
- (id)defaultFontWithResources:(id)arg1;
- (_Bool)isPie;
- (_Bool)isArea;
- (_Bool)supportsMarkers;
- (_Bool)isScatterOrBubble;
- (void)setMSGraph:(_Bool)arg1;
- (_Bool)hasSharedXValues;
- (void)setHasSharedXValues:(_Bool)arg1;
- (_Bool)isDirectionChanged;
- (unsigned long long)seriesCount;
- (id)defaultContentFormat;
- (_Bool)isMSGraph;
- (_Bool)is3D;
- (void)setVisibleSeriesNames:(_Bool)arg1;
- (void)setDirectionChanged:(_Bool)arg1;
- (_Bool)hasVisibleSeriesNames;
- (void)setThemeOverrides:(id)arg1;
- (void)setChartAreaGraphicProperties:(id)arg1;
- (void)setPlotArea:(id)arg1;
- (void)setAutoTitleDeleted:(_Bool)arg1;
- (void)setPlotVisibleCellsOnly:(_Bool)arg1;
- (void)setDisplayBlankAs:(int)arg1;
- (id)defaultTextProperties;
- (void)setDefaultTextProperties:(id)arg1;
- (id)view3D;

@end
