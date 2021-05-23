/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/TTTextStorage.h>

@class NSString;

@interface ICTableTextStorage : TTTextStorage

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (id)initWithDocument:(id)arg1;

@end
