/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIButton.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface ICDocCamToolbarFilterButton : UIButton

{
    _Bool _compact;
    _Bool _myHighlighted;
    CAShapeLayer *_maskLayer;
    struct CGRect _currentBounds;
}

@property (nonatomic) struct CGRect currentBounds;
@property (nonatomic) _Bool myHighlighted;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) _Bool compact;

+ (id)buttonWithType:(long long)arg1;

- (void)setEnabled:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)defaultTintColor;
- (id)preferredTintColor;
- (void)postButtonWithTypeInit;
- (void)updateInvertedImage;
- (void)setDefaultTintColor:(id)arg1;
- (void)setDarkenedTintColor:(id)arg1;
- (id)darkenedTintColor;

@end
