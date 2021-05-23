/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class UIImage, UIImageView;

@protocol OFUIWindowDraggingPasteboard;

@interface OFUIWindowDraggingItem : NSObject

{
    id <OFUIWindowDraggingPasteboard> _object;
    UIImageView *_imageView;
    UIImage *_originalImage;
    UIImage *_placeHolderImage;
    struct CGRect _originalBounds;
    double _imageAspectRatio;
    struct CGRect _imageContentsRect;
    struct CGAffineTransform _originalTransform;
    _Bool _isReverting;
    double _rotation;
}

@property (retain, nonatomic) id <OFUIWindowDraggingPasteboard> object;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double rotation;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *placeHolderImage;
@property (nonatomic) struct CGRect originalBounds;
@property (nonatomic) double imageAspectRatio;
@property (nonatomic) struct CGRect imageContentsRect;
@property (nonatomic) struct CGAffineTransform originalTransform;
@property (nonatomic) _Bool isReverting;

- (id)init;
- (void)dealloc;
- (id)initWithObject:(id)arg1 image:(id)arg2;

@end
