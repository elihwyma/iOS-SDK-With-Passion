/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class HUGridCellBackgroundDisplayOptions, NSString, UIFont, UIVisualEffect;

@interface HUGridCellLayoutOptions : NSObject <Swift>

{
    _Bool _drawsBorderForOnState;
    unsigned long long _contentColorStyle;
    HUGridCellBackgroundDisplayOptions *_backgroundDisplayOptions;
    UIVisualEffect *_vibrancyEffect;
    UIVisualEffect *_secondaryVibrancyEffect;
    double _secondaryContentDimmingFactor;
    UIFont *_font;
    double _iconSize;
    long long _iconContentMode;
    double _cellInnerMargin;
    double _cellCornerRadius;
    double _cellScaleFactor;
    long long _cellSizeSubclass;
}

@property (copy, nonatomic) HUGridCellBackgroundDisplayOptions *backgroundDisplayOptions;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (retain, nonatomic) UIVisualEffect *secondaryVibrancyEffect;
@property (nonatomic) double secondaryContentDimmingFactor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double iconSize;
@property (nonatomic) long long iconContentMode;
@property (nonatomic) double cellInnerMargin;
@property (nonatomic) double cellCornerRadius;
@property (nonatomic) _Bool drawsBorderForOnState;
@property (nonatomic) double cellScaleFactor;
@property (nonatomic, readonly) long long cellSizeSubclass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long contentColorStyle;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCellSizeSubclass:(long long)arg1;

@end
