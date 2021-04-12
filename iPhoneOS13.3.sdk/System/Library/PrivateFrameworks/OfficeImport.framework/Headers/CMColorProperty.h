//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface CMColorProperty : CMProperty
{
    OITSUColor *wdValue;
}

+ (float)transformedAlphaFromOADColor:(id)arg1;
+ (id)cssStringFromOADColor:(id)arg1;
+ (id)cssStringFromTSUColor:(id)arg1;
+ (id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)nsColorFromShading:(id)arg1;
+ (id)nsColorFromOADColor:(id)arg1 state:(id)arg2;
+ (id)nsColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2;
+ (CGColor )copyCGColorFromOADFill:(id)arg1 state:(id)arg2;
+ (CGColor )copyCGColorFromOADColor:(id)arg1 state:(id)arg2;
+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;
// - (void).cxx_destruct;
- (id)cssStringForName:(id)arg1;
- (id)cssString;
- (BOOL)isEqualTo:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)value;

@end

