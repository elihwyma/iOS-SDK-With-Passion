/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)mutableString;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)beginEditing;
- (void)endEditing;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendAttributedString:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange)arg2;

@end
