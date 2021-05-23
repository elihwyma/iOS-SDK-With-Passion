/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIImageView.h>

@interface SBAutoPurgingImageView : UIImageView

{
    CDUnknownBlockType _block;
}

- (void)setImage:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithImageGenerationBlock:(CDUnknownBlockType)arg1;

@end
