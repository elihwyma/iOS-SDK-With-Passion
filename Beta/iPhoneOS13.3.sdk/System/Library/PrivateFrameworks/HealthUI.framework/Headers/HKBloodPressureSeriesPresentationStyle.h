/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface HKBloodPressureSeriesPresentationStyle : NSObject

{
    double _width;
    UIColor *_systolicSymbolColor;
    UIColor *_systolicFillColor;
    UIColor *_diastolicSymbolColor;
    UIColor *_diastolicFillColor;
}

@property (nonatomic) double width;
@property (retain, nonatomic) UIColor *systolicSymbolColor;
@property (retain, nonatomic) UIColor *systolicFillColor;
@property (retain, nonatomic) UIColor *diastolicSymbolColor;
@property (retain, nonatomic) UIColor *diastolicFillColor;

@end
