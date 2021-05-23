/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSTextAttachment;

__attribute__((visibility("hidden")))
@interface _UITextAttachmentViewHelper : NSObject

{
    NSTextAttachment *_attachment;
}

@property (retain, nonatomic) NSTextAttachment *attachment;

+ (id)helperForAttachment:(id)arg1;

- (void)removeView;

@end
