/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/ENNoteContent.h>

@class NSString;

@interface ENHTMLNoteContent : ENNoteContent

{
    NSString *_html;
}

@property (copy, nonatomic) NSString *html;

- (id)initWithHTML:(id)arg1;
- (id)enmlWithNote:(id)arg1;

@end
