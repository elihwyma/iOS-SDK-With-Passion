/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@protocol PUImportAddToAlbumsToolbarViewDelegate;

__attribute__((visibility("hidden")))
@interface PUImportAddToAlbumsToolbarView : UIView

{
    NSString *_destinationCollectionTitle;
    UIButton *_destinationButton;
    id <PUImportAddToAlbumsToolbarViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_destinationLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *destinationLabel;
@property (retain, nonatomic) NSString *destinationCollectionTitle;
@property (nonatomic, readonly) UIButton *destinationButton;
@property (weak, nonatomic) id <PUImportAddToAlbumsToolbarViewDelegate> delegate;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)_setupSubviews;
- (void)_setupButton;
- (void)_updateButtonText;
- (void)_animateButtonAlpha:(double)arg1;
- (void)buttonTouchDragInside:(id)arg1;
- (void)buttonTouchDragOutside:(id)arg1;

@end
