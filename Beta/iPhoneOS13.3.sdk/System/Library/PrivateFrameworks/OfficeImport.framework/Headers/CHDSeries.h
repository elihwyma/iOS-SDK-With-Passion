/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDChart, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, CHDErrorBar, CHDFormula, EDCollection, EDKeyedCollection, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDSeries : NSObject

{
    CHDChart *mChart;
    CHDChartType *mChartType;
    unsigned long long mOrder;
    unsigned long long mStyleIndex;
    CHDFormula *mName;
    CHDDataValue *mLastCachedName;
    CHDData *mValueData;
    CHDData *mCategoryData;
    EDKeyedCollection *mDataValuePropertiesCollection;
    EDCollection *mTrendlinesCollection;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    CHDDataLabel *mDefaultDataLabel;
    OADGraphicProperties *mGraphicProperties;
    _Bool mDateTimeFormattingFlag;
    _Bool mHiddenFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)seriesWithChart:(id)arg1;

- (id)name;
- (long long)key;
- (_Bool)isEmpty;
- (void)setName:(id)arg1;
- (unsigned long long)order;
- (_Bool)isHidden;
- (id)valueData;
- (void)setOrder:(unsigned long long)arg1;
- (void)setValueData:(id)arg1;
- (id)shallowCopy;
- (unsigned long long)categoryCount;
- (void)setChartType:(id)arg1;
- (id)chartType;
- (id)graphicProperties;
- (id)lastCachedName;
- (id)categoryData;
- (_Bool)isDateTimeFormattingFlag;
- (id)dataValuePropertiesCollection;
- (id)defaultDataLabel;
- (id)errorBarYAxis;
- (id)chart;
- (id)initWithChart:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setLastCachedName:(id)arg1;
- (void)setDateTimeFormattingFlag:(_Bool)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setDefaultDataLabel:(id)arg1;
- (void)setErrorBarYAxis:(id)arg1;
- (void)setErrorBarXAxis:(id)arg1;
- (void)clearBackPointers;
- (unsigned long long)styleIndex;
- (void)setCategoryData:(id)arg1;
- (void)setDataValuePropertiesCollection:(id)arg1;
- (id)trendlineCollection;
- (void)setTrendlineCollection:(id)arg1;
- (_Bool)hasTrendlines;
- (void)setErrorBar:(id)arg1;
- (_Bool)hasErrorBars;
- (id)errorBarXAxis;
- (void)setHiddenFlag:(_Bool)arg1;
- (id)defaultSeriesNameForIndex:(unsigned long long)arg1;

@end
