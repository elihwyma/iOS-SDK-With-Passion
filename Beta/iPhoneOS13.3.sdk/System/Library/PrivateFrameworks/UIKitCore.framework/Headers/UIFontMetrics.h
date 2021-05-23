/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIFontMetrics : NSObject

{
    NSString *_textStyle;
}

+ (id)metricsForTextStyle:(id)arg1;
+ (id)defaultMetrics;

- (id)init;
- (double)scaledValueForValue:(double)arg1;
- (id)scaledFontForFont:(id)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)initForTextStyle:(id)arg1;
- (id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2;
- (id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;
- (double)scaledValueForValue:(double)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)ib_scaledFontForFont:(id)arg1;
- (id)ib_scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2;
- (id)scaledFontForFont:(id)arg1;

@end
