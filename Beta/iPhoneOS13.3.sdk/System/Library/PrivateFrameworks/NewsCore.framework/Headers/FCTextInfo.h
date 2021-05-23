/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCColor, FCLoadableFont;

@interface FCTextInfo : NSObject <Swift>

{
    FCLoadableFont *_font;
    long long _fontSizeAdjustment;
    double _lineHeightMultiplier;
    FCColor *_color;
}

@property (copy, nonatomic) FCLoadableFont *font;
@property (nonatomic) long long fontSizeAdjustment;
@property (nonatomic) double lineHeightMultiplier;
@property (copy, nonatomic) FCColor *color;

+ (id)textInfoFromJSONValues:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)fontSizeWithInitialFontSize:(double)arg1;

@end
