/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMSnapshotView;

@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderOpenAndCloseTransition : NSObject

{
    _Bool _didEnterBackground;
    id <CAMViewfinderTransitionable> __transitionableViewfinder;
    CAMSnapshotView *__snapshotView;
}

@property (weak, nonatomic, readonly) id <CAMViewfinderTransitionable> _transitionableViewfinder;
@property (retain, nonatomic, setter=_setSnapshotView:) CAMSnapshotView *_snapshotView;
@property (nonatomic) _Bool didEnterBackground;

- (id)initWithTransitionableViewfinder:(id)arg1;
- (void)closeAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)closeWithoutBlurring;
- (void)openAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_existingSnapshotViewCreateIfNecessary:(_Bool)arg1 removedOnCompletion:(_Bool)arg2;
- (void)_closeViewfinder:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
