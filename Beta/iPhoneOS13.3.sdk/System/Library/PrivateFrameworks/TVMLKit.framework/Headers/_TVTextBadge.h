/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _TVTextBadge : UIView

{
    NSAttributedString *_text;
    NSString *_type;
    UIColor *_tintColor;
    double _cornerRadius;
    double _lineWidth;
}

@property (retain, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double lineWidth;

+ (id)textBadgeViewWithElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
