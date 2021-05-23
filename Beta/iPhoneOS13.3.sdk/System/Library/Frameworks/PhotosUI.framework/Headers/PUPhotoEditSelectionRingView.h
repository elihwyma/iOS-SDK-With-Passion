/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSelectionRingView : UIView

{
    UIColor *_selectionRingColor;
    double _strokeWidth;
}

@property (retain, nonatomic) UIColor *selectionRingColor;
@property (nonatomic) double strokeWidth;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
