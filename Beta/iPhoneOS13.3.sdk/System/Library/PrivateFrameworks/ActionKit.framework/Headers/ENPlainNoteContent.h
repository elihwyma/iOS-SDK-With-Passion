/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/ENNoteContent.h>

@class NSArray;

@interface ENPlainNoteContent : ENNoteContent

{
    NSArray *_contents;
}

@property (copy, nonatomic) NSArray *contents;

- (id)initWithString:(id)arg1;
- (id)initWithContents:(id)arg1;
- (id)enmlWithNote:(id)arg1;

@end
