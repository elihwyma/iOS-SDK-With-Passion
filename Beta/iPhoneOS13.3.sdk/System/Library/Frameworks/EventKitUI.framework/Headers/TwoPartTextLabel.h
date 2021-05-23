/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UILabel.h>

@class NSString;

@interface TwoPartTextLabel : UILabel

{
    NSString *_secondTextPart;
    struct CGSize _part2Size;
    double _minPart2Width;
    _Bool _strikethroughPart1;
    _Bool _strikethroughPart2;
}

@property (nonatomic) _Bool strikethroughPart1;
@property (nonatomic) _Bool strikethroughPart2;

- (id)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)hasTwoParts;
- (void)setTextPart1:(id)arg1;
- (double)rightmostDisplayedPartWidth;
- (void)setMinimumPart2Width:(double)arg1;
- (void)setTextPart1:(id)arg1 part2:(id)arg2;
- (struct CGSize)textPart2Size;
- (struct CGSize)idealSize;

@end
