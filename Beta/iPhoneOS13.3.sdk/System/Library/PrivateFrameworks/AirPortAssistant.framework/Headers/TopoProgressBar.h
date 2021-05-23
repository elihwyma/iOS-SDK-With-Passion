/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <QuartzCore/CALayer.h>

@interface TopoProgressBar : CALayer

{
    id _owningView;
    float _progressValue;
}

@property (nonatomic) id owningView;
@property (nonatomic) float progressValue;

+ (int)initImageCache;
+ (void)deallocImageCache;

- (void)dealloc;
- (id)initWithOwningView:(id)arg1;
- (void)layoutSublayers;
- (struct CGSize)preferredFrameSize;
- (struct CGImage *)composeProgressBar;

@end
