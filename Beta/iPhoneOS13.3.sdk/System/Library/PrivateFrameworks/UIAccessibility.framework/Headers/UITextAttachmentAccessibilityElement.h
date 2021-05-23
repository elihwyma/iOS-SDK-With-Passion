/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIAccessibilityElement.h>

@class NSTextAttachment;

@interface UITextAttachmentAccessibilityElement : UIAccessibilityElement

{
    NSTextAttachment *_attachment;
}

@property (retain, nonatomic) NSTextAttachment *attachment;

@end
