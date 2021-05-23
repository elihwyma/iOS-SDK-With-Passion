/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIKBCompositeImageView : UIView

{
    NSArray *_imageViews;
    struct CGSize _imageSize;
}

@property (nonatomic) struct CGSize imageSize;
@property (retain, nonatomic) NSArray *imageViews;

- (void)layoutSubviews;

@end
