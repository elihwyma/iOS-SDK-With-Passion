/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICTrackedParagraph, NSAttributedString;

@interface ICParagraphInfoSortInfo : NSObject

{
    ICTrackedParagraph *_trackedParagraph;
    NSAttributedString *_attributedString;
    struct _NSRange _characterRange;
}

@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) struct _NSRange characterRange;

@end
