/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIImageView.h>

@class CKAnimatedImage, NSArray, NSString;

@interface CKAnimatedImageView : UIImageView

{
    _Bool _automaticallyObserveWindowForAnimationTimer;
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
}

@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (nonatomic) _Bool automaticallyObserveWindowForAnimationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)updateAnimationTimerObserving;
- (void)animationTimerFired:(unsigned long long)arg1;

@end
