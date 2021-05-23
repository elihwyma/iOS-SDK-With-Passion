/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <UIKit/NSTextAttachment.h>

@class UIFont;

@interface TLKImageAttachment : NSTextAttachment

{
    UIFont *_font;
}

@property (retain, nonatomic) UIFont *font;

- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;

@end
