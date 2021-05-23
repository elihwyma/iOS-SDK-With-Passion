/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@interface _PXAssetLoopUIView : UIView

{
    CDUnknownBlockType _visibilityChangeHandler;
}

@property (copy, nonatomic) CDUnknownBlockType visibilityChangeHandler;

- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToWindow;

@end
