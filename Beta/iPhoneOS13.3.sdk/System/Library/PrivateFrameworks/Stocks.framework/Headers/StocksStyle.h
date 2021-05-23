/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface StocksStyle : NSObject

{
    UIColor *_chartHighlightColor;
    UIFont *_mainFont;
    UIFont *_chartLabelFont;
}

+ (id)sharedStyle;

- (id)init;
- (void)resetLocale;
- (id)fontOfSize:(double)arg1;
- (id)lightFontOfSize:(double)arg1;
- (id)lossColor;
- (id)gainColor;
- (id)chartHighlightColor;
- (id)boldFontOfSize:(double)arg1;
- (id)mediumFontOfSize:(double)arg1;

@end
