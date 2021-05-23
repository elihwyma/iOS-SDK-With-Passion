/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIFoundation/NSTextAttachment.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UITextPlaceholderAttachment : NSTextAttachment

{
    NSDictionary *_typingAttributesBeforeInsertion;
    struct _NSRange _attachmentRange;
}

@property (nonatomic) struct _NSRange attachmentRange;
@property (copy, nonatomic) NSDictionary *typingAttributesBeforeInsertion;

- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;

@end
