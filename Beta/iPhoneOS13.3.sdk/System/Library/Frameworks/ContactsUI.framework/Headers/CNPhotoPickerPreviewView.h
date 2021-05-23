/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerPreviewView : UIView

{
    UIView *_previewView;
    UIView *_thumbnailContentView;
    CAShapeLayer *_clippingLayer;
}

@property (nonatomic, readonly) UIView *previewView;
@property (retain, nonatomic) UIView *thumbnailContentView;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;

+ (id)pickerPreviewWithFrame:(struct CGRect)arg1 forItem:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setupPreview;
- (void)updatePreviewWithItem:(id)arg1;

@end
