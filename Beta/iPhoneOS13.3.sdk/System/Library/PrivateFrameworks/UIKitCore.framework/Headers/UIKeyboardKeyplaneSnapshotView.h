/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeyplaneSnapshotView : UIView

{
    UIImageView *_fgView;
    UIImageView *_bgView;
}

- (void)setAlpha:(double)arg1;
- (id)snapshotFromView:(id)arg1;
- (id)initWithKeyplaneView:(id)arg1;

@end
