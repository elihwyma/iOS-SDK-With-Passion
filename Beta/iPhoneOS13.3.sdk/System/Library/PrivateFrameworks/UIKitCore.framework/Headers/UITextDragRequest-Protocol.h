/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UITextRange;

@protocol UIDragSession;

@protocol UITextDragRequest <Swift>

@property (nonatomic, readonly) UITextRange *dragRange;
@property (nonatomic, readonly) NSArray *suggestedItems;
@property (nonatomic, readonly) NSArray *existingItems;
@property (nonatomic, readonly, getter=isSelected) _Bool selected;
@property (nonatomic, readonly) id <UIDragSession> dragSession;

@end
