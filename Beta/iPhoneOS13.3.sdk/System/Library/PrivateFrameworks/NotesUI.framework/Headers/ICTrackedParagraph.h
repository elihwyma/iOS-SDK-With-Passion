/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class TTParagraphStyle;

@interface ICTrackedParagraph : NSObject

{
    TTParagraphStyle *_paragraph;
    struct _NSRange _characterRange;
}

@property (retain, nonatomic) TTParagraphStyle *paragraph;
@property (nonatomic) struct _NSRange characterRange;

- (id)description;

@end
