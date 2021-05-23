/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolControllerView : UIView

{
    UIView *_eventForwardView;
}

@property (weak, nonatomic) UIView *eventForwardView;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
