/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIImageView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VideosExtrasBorderedImageView : UIImageView

{
    _Bool _shouldDeferSettingTransform;
    _Bool _shouldUseTransformWhenReplicatingState;
    _Bool _shouldSkipImageWhenReplicatingState;
    struct CGAffineTransform _deferredTransform;
}

@property (nonatomic) struct CGAffineTransform deferredTransform;
@property (nonatomic) _Bool shouldDeferSettingTransform;
@property (nonatomic) _Bool shouldUseTransformWhenReplicatingState;
@property (nonatomic) _Bool shouldSkipImageWhenReplicatingState;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;

- (void)setTransform:(struct CGAffineTransform)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)replicateStateFromImageView:(id)arg1;

@end
