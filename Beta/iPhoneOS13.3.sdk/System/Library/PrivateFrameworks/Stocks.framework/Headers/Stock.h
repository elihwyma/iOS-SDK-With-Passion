/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class Exchange, NSString, NSURL, StockChartData, StockDataSource;

@interface Stock : NSObject

{
    StockChartData *_chartDataArray[9];
    _Bool _transient;
    unsigned int _pricePrecision;
    NSString *_symbol;
    NSString *_companyName;
    NSString *_shortCompanyName;
    Exchange *_exchange;
    NSString *_price;
    NSString *_change;
    NSString *_currency;
    NSString *_symbolType;
    NSString *_open;
    NSString *_high;
    NSString *_low;
    NSString *_yearHigh;
    NSString *_yearLow;
    NSString *_volume;
    NSString *_averageVolume;
    NSString *_marketcap;
    NSString *_peRatio;
    NSString *_dividendYield;
    NSURL *_infoURL;
    StockDataSource *_dataSource;
    double _timeQuoteLastUpdated;
    double _timeMetadataLastUpdated;
}

@property (retain, nonatomic) NSString *symbol;
@property (retain, nonatomic) NSString *companyName;
@property (retain, nonatomic) NSString *shortCompanyName;
@property (retain, nonatomic) Exchange *exchange;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *change;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSString *symbolType;
@property (retain, nonatomic) NSString *open;
@property (retain, nonatomic) NSString *high;
@property (retain, nonatomic) NSString *low;
@property (retain, nonatomic) NSString *yearHigh;
@property (retain, nonatomic) NSString *yearLow;
@property (retain, nonatomic) NSString *volume;
@property (retain, nonatomic) NSString *averageVolume;
@property (retain, nonatomic) NSString *marketcap;
@property (retain, nonatomic) NSString *peRatio;
@property (retain, nonatomic) NSString *dividendYield;
@property (nonatomic, readonly) unsigned int pricePrecision;
@property (retain, nonatomic) NSURL *infoURL;
@property (retain, nonatomic) StockDataSource *dataSource;
@property (nonatomic) double timeQuoteLastUpdated;
@property (nonatomic) double timeMetadataLastUpdated;
@property (nonatomic, getter=isTransient) _Bool transient;
@property (nonatomic, readonly) NSString *marketStatusDescription;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSString *formattedChange;
@property (nonatomic, readonly) NSString *formattedChangePercent;

+ (id)urlForStockSymbol:(id)arg1;
+ (id)BlankValueString;
+ (id)postfixCharacterForMagnitude:(unsigned int)arg1 unitMagnitude:(unsigned int *)arg2;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)listNameOverridesBySymbol;
+ (id)_potentiallyAbsentKeys;
+ (id)urlForStock:(id)arg1;
+ (id)symbolForURL:(id)arg1;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (double)_updateInterval;
- (id)archiveDictionary;
- (id)listName;
- (void)_updatePricePrecision;
- (void)populateFromDictionary:(id)arg1;
- (void)setChartData:(id)arg1 forInterval:(long long)arg2;
- (id)formattedChangePercent:(_Bool)arg1;
- (_Bool)marketIsOpen;
- (id)listNameWithMaxIndexNameLength:(unsigned long long)arg1;
- (id)listNameOverride;
- (_Bool)shouldUseCompanyNameAsListName:(unsigned long long)arg1;
- (_Bool)isIndex;
- (_Bool)changeIsNegative;
- (_Bool)changeIsZero;
- (_Bool)isQuoteStale;
- (_Bool)isMetadataStale;
- (_Bool)doesQuoteNeedUpdate;
- (_Bool)doesMetadataNeedUpdate;
- (id)chartDataForInterval:(long long)arg1;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (id)formattedPriceDroppingFractionDigitsIfLengthExceeds:(unsigned long long)arg1;

@end
