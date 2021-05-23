/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIView.h>

#import <CoverSheet/Swift-Protocol.h>

@class MTLumaDodgePillView, MTStaticColorPillView, NSString, UIColor, _UILegibilitySettings;

@interface CSHomeAffordanceView : UIView <Swift>

{
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _style;
    UIColor *_overrideColor;
    MTStaticColorPillView *_staticHomeAffordance;
    MTLumaDodgePillView *_dynamicHomeAffordance;
}

@property (weak, nonatomic) MTStaticColorPillView *staticHomeAffordance;
@property (weak, nonatomic) MTLumaDodgePillView *dynamicHomeAffordance;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)init;
- (void)layoutSubviews;
- (double)suggestedEdgeSpacing;
- (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
- (void)_createStaticHomeAffordance;
- (void)_createDynamicHomeAffordance;
- (void)_transitionToStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateForLegibility;
- (id)_viewForStyle:(unsigned long long)arg1;

@end
