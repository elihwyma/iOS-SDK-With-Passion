/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMViewfinderFlipTransition, CAMViewfinderOpenAndCloseTransition;

@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderTransitionController : NSObject

{
    id <CAMViewfinderTransitionable> _target;
    CAMViewfinderOpenAndCloseTransition *__openAndCloseTransition;
    CAMViewfinderFlipTransition *__flipTransition;
}

@property (retain, nonatomic, setter=_setOpenAndCloseTransition:) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition;
@property (retain, nonatomic, setter=_setFlipTransition:) CAMViewfinderFlipTransition *_flipTransition;
@property (weak, nonatomic) id <CAMViewfinderTransitionable> target;

- (void)closeWithBlur:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)closeAndRotateWithDirection:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)openForReason:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleApplicationDidEnterBackground;

@end
