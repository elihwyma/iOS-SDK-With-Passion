//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDAxesCollection, CHDChartTypesCollection, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDPlotArea : NSObject
{
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    BOOL mCategoryAxesReversed;
    BOOL mCategoryAxesReversedOverridden;
    BOOL mContainsVolumeStockType;
}

// - (void).cxx_destruct;
- (id)description;
- (void)setContainsVolumeStockType:(BOOL)arg1;
- (BOOL)containsVolumeStockType;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)markSecondaryAxes;
- (BOOL)hasSecondaryYAxisDeleted;
- (BOOL)hasSecondaryAxis;
- (id)axes;
- (id)chartTypes;
- (id)initWithChart:(id)arg1;
- (BOOL)isCategoryAxesReversed:(BOOL)arg1;

@end

