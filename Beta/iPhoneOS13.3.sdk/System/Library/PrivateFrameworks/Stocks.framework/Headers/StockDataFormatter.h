/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter, NSString;

@protocol OS_dispatch_queue;

@interface StockDataFormatter : NSObject

{
    _Bool _localeUsesASCII;
    NSObject<OS_dispatch_queue> *_decimalFormatterQueue;
    NSNumberFormatter *_decimalFormatter;
    NSObject<OS_dispatch_queue> *_percentFormatterQueue;
    NSNumberFormatter *_percentFormatter;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decimalFormatterQueue;
@property (retain, nonatomic) NSNumberFormatter *decimalFormatter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *percentFormatterQueue;
@property (retain, nonatomic) NSNumberFormatter *percentFormatter;
@property (nonatomic, readonly, getter=doesLocaleUseASCII) _Bool localeUsesASCII;
@property (nonatomic, readonly) NSString *percentSymbol;

+ (id)sharedDataFormatter;

- (void)dealloc;
- (id)initPrivate;
- (id)formattedNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(_Bool)arg3;
- (id)formattedPriceForStock:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)formattedChangeInPointsForStock:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)formattedChangeInPercentForStock:(id)arg1;
- (id)formattedPriceForStock:(id)arg1 withPrecision:(unsigned long long)arg2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg3;
- (void)_resetLocale:(id)arg1;
- (id)formattedPercent:(id)arg1;
- (id)formattedChangeInPointsForStock:(id)arg1 withPrecision:(unsigned long long)arg2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg3;
- (id)formattedNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(_Bool)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg4;
- (id)_locked_formatNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(_Bool)arg3;
- (id)formattedPercent:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)_locked_formatPercent:(id)arg1 withPrecision:(unsigned long long)arg2;

@end
