/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIView.h>

__attribute__((visibility("hidden")))
@interface QLRoundProgressView : UIView

@property (nonatomic) double progress;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;

@end
