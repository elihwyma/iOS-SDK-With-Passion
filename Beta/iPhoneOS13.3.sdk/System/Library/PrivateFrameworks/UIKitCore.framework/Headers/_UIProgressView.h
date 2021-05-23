/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSProgress, _UICircleProgressView;

__attribute__((visibility("hidden")))
@interface _UIProgressView : UIView

{
    _UICircleProgressView *_progressView;
    NSProgress *_trackedProgress;
}

@property (retain, nonatomic) NSProgress *trackedProgress;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateProgressValue;

@end
