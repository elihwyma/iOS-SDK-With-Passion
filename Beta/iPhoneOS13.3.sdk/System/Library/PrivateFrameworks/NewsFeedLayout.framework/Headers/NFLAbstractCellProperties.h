/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLFontCache, NSDictionary;

@interface NFLAbstractCellProperties : NSObject

{
    NFLFontCache *_fontCache;
    double _scaleValue;
    long long _rowSpan;
    NSDictionary *_layout;
    NSDictionary *_columnIrrespectiveProperties;
}

@property (retain, nonatomic) NSDictionary *layout;
@property (retain, nonatomic) NSDictionary *columnIrrespectiveProperties;
@property (retain, nonatomic) NFLFontCache *fontCache;
@property (nonatomic) double scaleValue;
@property (nonatomic, readonly) long long rowSpan;

- (id)initWithLayout:(id)arg1 columnIrrespectiveProperties:(id)arg2 fontCache:(id)arg3 scaleValue:(double)arg4;
- (struct CGSize)sizeForPropertyKey:(id)arg1;
- (id)numberForPropertyKey:(id)arg1;
- (id)numberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (double)scaledValueForValue:(double)arg1 fontID:(id)arg2;
- (struct CGSize)scaledSizeForPropertyKey:(id)arg1;
- (id)scaledNumberForPropertyKey:(id)arg1;
- (id)scaledNumberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (id)arrayForPropertyKey:(id)arg1;
- (id)dictionaryForPropertyKey:(id)arg1 columnSpan:(long long)arg2;
- (id)stringForPropertyKey:(id)arg1;
- (id)stringForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (double)fontWeightForFontID:(id)arg1;
- (_Bool)fontCondensedForFontID:(id)arg1;
- (double)scaledFontSizeForFontID:(id)arg1;
- (double)lineHeightForFont:(id)arg1 locale:(id)arg2;

@end
