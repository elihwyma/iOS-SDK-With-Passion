/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _WDRoundedCornerView : UIView

{
    UIColor *_backgroundColor;
    double _cornerRadius;
    struct NSDirectionalEdgeInsets _edgeInsets;
    UIView *_contentView;
}

@property (nonatomic) struct NSDirectionalEdgeInsets edgeInsets;
@property (nonatomic, readonly) UIView *contentView;

- (id)initWithContentView:(id)arg1;
- (void)layoutSubviews;

@end
