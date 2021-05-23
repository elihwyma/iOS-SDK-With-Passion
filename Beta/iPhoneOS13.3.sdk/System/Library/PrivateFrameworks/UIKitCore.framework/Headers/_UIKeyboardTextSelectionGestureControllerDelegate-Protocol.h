/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;

@protocol _UIKeyboardTextSelectionGestureControllerDelegate <Swift>

@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;

@end
