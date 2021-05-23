/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject

{
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    _Bool _use24hrTime;
}

+ (id)sharedLabelInfoManager;
+ (struct __CFString *)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1;
+ (void)clearSharedManager;
+ (id)chartLabelFont;

- (id)init;
- (void)dealloc;
- (void)resetLocale;
- (id)labelInfoForYAxis;
- (id)monthLabelInfoArrayForLabelLength:(long long)arg1;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)arg1;
- (_Bool)use24hrTime;
- (id)labelInfoWithString:(id)arg1;

@end
