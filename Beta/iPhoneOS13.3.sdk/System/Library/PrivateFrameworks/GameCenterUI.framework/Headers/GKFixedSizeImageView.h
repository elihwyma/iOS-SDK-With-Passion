/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIImageView.h>

@class UIImage;

@interface GKFixedSizeImageView : UIImageView

{
    UIImage *_actualImage;
}

@property (retain, nonatomic) UIImage *actualImage;

- (void)dealloc;
- (id)image;
- (void)setImage:(id)arg1;
- (void)invalidateIntrinsicContentSize;

@end
