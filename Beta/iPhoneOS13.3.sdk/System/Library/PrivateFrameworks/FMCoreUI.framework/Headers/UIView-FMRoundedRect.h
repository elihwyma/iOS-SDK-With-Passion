/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSNumber, UIColor;

@interface UIView (FMRoundedRect)

@property (retain, nonatomic) UIColor *roundedRectBackgroundColor;
@property (retain, nonatomic) UIColor *roundedRectBorderColor;
@property (retain, nonatomic) NSNumber *roundedRectBorderWidth;
@property (retain, nonatomic) UIColor *debugHighlight;
@property (copy, readonly) NSArray *allSubviews;

- (struct CGPath *)newPathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2;
- (void)performOnAllSubviews:(CDUnknownBlockType)arg1;
- (void)centerHorizontallyInSuperview;
- (void)centerVerticallyInSuperview;
- (void)setRandomDebugHighlight;
- (id)generateImage;
- (id)addConstraintsToFillSuperview;
- (id)addConstraintsToSetSize:(struct CGSize)arg1;

@end
