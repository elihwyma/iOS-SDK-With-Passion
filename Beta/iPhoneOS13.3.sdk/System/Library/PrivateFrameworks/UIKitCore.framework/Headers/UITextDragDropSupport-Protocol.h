/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIDragInteraction, UIDropInteraction;

@protocol UITextDragDropSupport <Swift>

@property (nonatomic, readonly) UIDragInteraction *dragInteraction;
@property (nonatomic, readonly) UIDropInteraction *dropInteraction;
@property (nonatomic, readonly, getter=isDragActive) _Bool dragActive;
@property (nonatomic, readonly, getter=isDropActive) _Bool dropActive;

- (unsigned short)accessibilityCanDrag;
- (unsigned short)notifyTextInteraction;
- (unsigned short)invalidateDropCaret;

@end
