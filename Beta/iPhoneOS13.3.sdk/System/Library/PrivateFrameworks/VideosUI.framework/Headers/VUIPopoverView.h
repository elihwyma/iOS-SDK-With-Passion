/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSString, TVImageProxy, VUIButton, VUIPopoverDescriptor;

__attribute__((visibility("hidden")))
@interface VUIPopoverView : UIView

{
    _Bool _imageLoaded;
    VUIPopoverDescriptor *_popoverDescriptor;
    VUIButton *_tvPopoverButton;
    TVImageProxy *_imageProxy;
}

@property (retain, nonatomic) VUIButton *tvPopoverButton;
@property (nonatomic, getter=isImageLoaded) _Bool imageLoaded;
@property (retain, nonatomic) TVImageProxy *imageProxy;
@property (retain, nonatomic) VUIPopoverDescriptor *popoverDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_popoverButtonPressed:(id)arg1;

@end
