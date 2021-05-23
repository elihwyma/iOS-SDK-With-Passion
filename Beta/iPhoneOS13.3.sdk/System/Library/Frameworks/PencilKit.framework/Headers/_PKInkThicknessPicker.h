/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString;

@interface _PKInkThicknessPicker : UIControl

{
    NSString *_inkIdentifier;
    double _weight;
    NSArray *_thicknessButtons;
}

@property (retain, nonatomic) NSArray *thicknessButtons;
@property (retain, nonatomic) NSString *inkIdentifier;
@property (nonatomic) double weight;

+ (long long)_nearestButtonIndexForWeight:(double)arg1;
+ (struct CGRect)_buttonFrameForButtonIndex:(long long)arg1;
+ (double)_weightForButtonIndex:(long long)arg1;
+ (struct CGRect)_buttonFrameForWeight:(double)arg1;
+ (double)_weightForButtonFrame:(struct CGRect)arg1;
+ (double)_nearestButtonWeightForWeight:(double)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)buttonTapped:(id)arg1;
- (id)initWithInkIdentifier:(id)arg1;

@end
