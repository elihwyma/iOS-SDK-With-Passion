/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface PUImportSectionBackgroundView : UICollectionReusableView

{
    _Bool _needsBottomStrokeViewUpdate;
    double _strokeWidth;
    UIColor *_bottomStrokeColor;
    UIView *_bottomStrokeView;
}

@property (retain, nonatomic) UIView *bottomStrokeView;
@property (nonatomic) _Bool needsBottomStrokeViewUpdate;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *bottomStrokeColor;

- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setNeedsBottomStrokeViewUpdate;
- (void)updateBottomStrokeViewIfNeeded;
- (_Bool)needsStroke;

@end
