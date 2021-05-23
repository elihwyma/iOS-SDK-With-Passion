/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TTParagraphStyle;

@interface ICParagraphInfo : NSObject

{
    TTParagraphStyle *_paragraphStyle;
    NSMutableArray *_children;
    struct _NSRange _characterRange;
    struct _NSRange _rangeIncludingChildren;
}

@property (retain, nonatomic) TTParagraphStyle *paragraphStyle;
@property (nonatomic) struct _NSRange characterRange;
@property (nonatomic) struct _NSRange rangeIncludingChildren;
@property (retain, nonatomic) NSMutableArray *children;
@property (nonatomic, readonly) unsigned int style;
@property (nonatomic, readonly) unsigned long long indent;

@end
