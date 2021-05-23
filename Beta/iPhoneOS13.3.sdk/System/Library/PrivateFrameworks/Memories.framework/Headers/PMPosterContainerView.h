/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface PMPosterContainerView : UIView

{
    NSArray *_images;
    NSArray *_imageViews;
}

@property (retain, nonatomic) NSArray *imageViews;
@property (retain, nonatomic) NSArray *images;

- (void)layoutSubviews;

@end
