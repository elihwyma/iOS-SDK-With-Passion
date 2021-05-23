/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIButton.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface PUImportCustomViewBarButton : UIButton

{
    UIView *_customView;
    NSString *_customAccessibilityLabel;
}

@property (nonatomic, readonly) UIView *customView;
@property (copy, nonatomic) NSString *customAccessibilityLabel;

- (struct CGSize)intrinsicContentSize;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCustomView:(id)arg1;
- (void)sizeToFit;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)invalidateIntrinsicContentSize;

@end
