/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIDropInteraction;

@protocol UITextDropDelegate;

@protocol UITextDroppable <Swift>

@property (weak, nonatomic) id <UITextDropDelegate> textDropDelegate;
@property (nonatomic, readonly) UIDropInteraction *textDropInteraction;
@property (nonatomic, readonly, getter=isTextDropActive) _Bool textDropActive;

@end
