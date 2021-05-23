/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIDragInteraction;

@protocol UITextDragDelegate;

@protocol UITextDraggable <Swift>

@property (weak, nonatomic) id <UITextDragDelegate> textDragDelegate;
@property (nonatomic, readonly) UIDragInteraction *textDragInteraction;
@property (nonatomic, readonly, getter=isTextDragActive) _Bool textDragActive;
@property (nonatomic) long long textDragOptions;

@end
