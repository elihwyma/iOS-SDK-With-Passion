/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVHeaderColumnView : UIView

{
    NSArray *_labelViews;
    double _lineSpacing;
}

@property (copy, nonatomic) NSArray *labelViews;
@property (nonatomic) double lineSpacing;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
