/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSTimeZone, Stock;

@interface StockChartData : NSObject

{
    NSMutableDictionary *_imageSetCache;
    NSMutableDictionary *_yAxisLabelInfoCache;
    NSMutableDictionary *_xAxisLabelInfoCache;
    NSMutableDictionary *_labelPlacementCache;
    _Bool _isUnavailable;
    _Bool _hasVolume;
    unsigned int _stockValueCount;
    float _previousClosePrice;
    int _yAxisFractionDigits;
    Stock *_stock;
    long long _chartInterval;
    CDStruct_d4d9707c *_stockValues;
    NSArray *_interestingIndexes;
    NSDate *_marketOpenDate;
    NSDate *_marketCloseDate;
    NSTimeZone *_marketTimeZone;
    CDStruct_d4d9707c *_minValue;
    CDStruct_d4d9707c *_maxValue;
    double _expirationTime;
    NSDictionary *_dataSeriesDict;
}

@property (weak, nonatomic) Stock *stock;
@property (nonatomic) long long chartInterval;
@property (readonly) CDStruct_d4d9707c *stockValues;
@property (readonly) unsigned int stockValueCount;
@property (retain, nonatomic) NSArray *interestingIndexes;
@property (retain, nonatomic) NSDate *marketOpenDate;
@property (retain, nonatomic) NSDate *marketCloseDate;
@property (retain, nonatomic) NSTimeZone *marketTimeZone;
@property (nonatomic) CDStruct_d4d9707c *minValue;
@property (nonatomic) CDStruct_d4d9707c *maxValue;
@property (nonatomic) float previousClosePrice;
@property (nonatomic) double expirationTime;
@property (nonatomic) _Bool isUnavailable;
@property (nonatomic) _Bool hasVolume;
@property (nonatomic) int yAxisFractionDigits;
@property (retain, nonatomic) NSDictionary *dataSeriesDict;

- (void)dealloc;
- (id)description;
- (void)clearAllImageSets;
- (id)xAxisLabelInfoArrayForMode:(id)arg1;
- (id)yAxisLabelInfoArrayForMode:(id)arg1;
- (void)setXAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2;
- (void)setLabelPlacement:(long long)arg1 forDisplayMode:(id)arg2;
- (void)setYAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2;
- (id)initWithStock:(id)arg1 interval:(long long)arg2;
- (CDStruct_d4d9707c *)allocateStockValuesWithCount:(unsigned int)arg1;
- (id)imageSetForDisplayMode:(id)arg1;
- (void)setImageSet:(id)arg1 forDisplayMode:(id)arg2;
- (long long)labelPlacementForDisplayMode:(id)arg1;

@end
