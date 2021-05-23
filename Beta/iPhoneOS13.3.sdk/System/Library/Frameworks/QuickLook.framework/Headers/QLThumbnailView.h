/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface QLThumbnailView : UIView

{
    _Bool _alwaysVisible;
    UIImage *_image;
    long long _pageNumber;
    struct CGRect _unselectedFrame;
}

@property (retain, nonatomic) UIImage *image;
@property long long pageNumber;
@property _Bool alwaysVisible;
@property struct CGRect unselectedFrame;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
