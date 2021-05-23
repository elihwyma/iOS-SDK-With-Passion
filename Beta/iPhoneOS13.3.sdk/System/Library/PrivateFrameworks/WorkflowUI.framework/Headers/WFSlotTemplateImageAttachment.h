/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/NSTextAttachment.h>

@class UIFont;

@interface WFSlotTemplateImageAttachment : NSTextAttachment

{
    UIFont *_fontForAlignment;
}

@property (retain, nonatomic) UIFont *fontForAlignment;

- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;

@end
