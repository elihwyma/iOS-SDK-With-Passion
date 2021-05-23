/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTParagraphStyle.h>

@class TTTodo;

@interface TTMutableParagraphStyle : TTParagraphStyle

@property (nonatomic) unsigned int style;
@property (nonatomic) long long alignment;
@property (nonatomic) long long writingDirection;
@property (nonatomic) unsigned long long indent;
@property (nonatomic) unsigned long long startingItemNumber;
@property (retain, nonatomic) TTTodo *todo;
@property (nonatomic) unsigned int hints;
@property (nonatomic) _Bool needsParagraphCleanup;
@property (nonatomic) _Bool needsListCleanup;

+ (id)paragraphStyleNamed:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
