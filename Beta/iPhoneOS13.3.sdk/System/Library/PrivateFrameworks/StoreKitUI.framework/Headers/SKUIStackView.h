/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage, UIWindow;

@interface SKUIStackView : UIView

{
    UIImage *_image;
    NSMutableArray *_stackViews;
    long long _stackViewStyle;
    UIWindow *_window;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) long long stackViewStyle;

- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)performCompressionAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_stackDepth;
- (id)_initSKUIStackView;
- (struct CGSize)_sizeOfItemAtIndex:(double)arg1;
- (struct UIOffset)_relativeOffsetOfItemAtIndex:(long long)arg1 withCenter:(struct CGPoint)arg2;
- (struct CGPoint)_centerInPerspectiveTargetViewCoordinates;
- (struct CGSize)_levelInsetSize;
- (struct CGSize)_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint)arg1 perspectiveTargetView:(id)arg2;
- (struct UIOffset)_relativeOffsetForMinimumRelativeOffset:(struct UIOffset)arg1 maximumRelativeOffset:(struct UIOffset)arg2 normalizedDistanceFromVanishingPoint:(struct CGSize)arg3;
- (id)initWithStackViewStyle:(long long)arg1;

@end
