/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIView.h>

@class MPUBorderConfiguration;

@interface MPUBorderView : UIView

{
    _Bool _hidesWhenFullyTransparent;
    MPUBorderConfiguration *_borderConfiguration;
}

@property (copy, nonatomic) MPUBorderConfiguration *borderConfiguration;
@property (nonatomic) _Bool hidesWhenFullyTransparent;
@property (nonatomic, readonly) double requiredOutsetForDropShadow;
@property (nonatomic, readonly) struct UIEdgeInsets resizableImageCapInsets;

+ (double)requiredOutsetForDropShadow;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
