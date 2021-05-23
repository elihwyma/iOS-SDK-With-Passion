/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableAttributedString.h>

__attribute__((visibility("hidden")))
@interface NSCFAttributedString : NSMutableAttributedString

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)string;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendAttributedString:(id)arg1;
- (void)setAttributedString:(id)arg1;

@end
