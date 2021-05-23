/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIToolbar;

@protocol SKUISlideshowGalleryBarViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUISlideshowGalleryBarView : UIView

{
    UIToolbar *_toolbarView;
    UIView *_imageViewsContainer;
    NSMutableArray *_imageViews;
    id <SKUISlideshowGalleryBarViewDelegate> _delegate;
    unsigned long long _numberOfImages;
    unsigned long long _selectedImageIndex;
}

@property (weak, nonatomic) id <SKUISlideshowGalleryBarViewDelegate> delegate;
@property (nonatomic) unsigned long long numberOfImages;
@property (nonatomic) unsigned long long selectedImageIndex;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)imageAtIndex:(long long)arg1;
- (id)_newImageView;
- (void)_handleTouch:(id)arg1 withEvent:(id)arg2;
- (void)setImage:(id)arg1 atIndex:(long long)arg2;

@end
