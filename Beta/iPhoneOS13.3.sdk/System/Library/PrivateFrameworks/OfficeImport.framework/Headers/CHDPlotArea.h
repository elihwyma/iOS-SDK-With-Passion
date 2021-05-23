/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDAxesCollection, CHDChartTypesCollection, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDPlotArea : NSObject

{
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    _Bool mCategoryAxesReversed;
    _Bool mCategoryAxesReversedOverridden;
    _Bool mContainsVolumeStockType;
}

- (id)description;
- (id)axes;
- (id)graphicProperties;
- (id)initWithChart:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setContainsVolumeStockType:(_Bool)arg1;
- (id)chartTypes;
- (_Bool)hasSecondaryAxis;
- (_Bool)hasSecondaryYAxisDeleted;
- (void)markSecondaryAxes;
- (_Bool)containsVolumeStockType;
- (_Bool)isCategoryAxesReversed:(_Bool)arg1;

@end
