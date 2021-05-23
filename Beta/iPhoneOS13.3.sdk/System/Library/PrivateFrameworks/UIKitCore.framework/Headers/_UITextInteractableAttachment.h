/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITextInteractableItem.h>

@class NSTextAttachment;

__attribute__((visibility("hidden")))
@interface _UITextInteractableAttachment : _UITextInteractableItem

{
    NSTextAttachment *_attachment;
}

@property (retain, nonatomic) NSTextAttachment *attachment;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isAttachment;

@end
