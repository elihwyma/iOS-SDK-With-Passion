/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableAttributedString.h>

@class NSMutableRLEArray, NSMutableString;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString

{
    NSMutableString *mutableString;
    NSMutableRLEArray *mutableAttributes;
    struct {
        unsigned int attributeFixingDisabled:8;
        unsigned int :24;
    } fields;
}

+ (_Bool)supportsSecureCoding;
+ (Class)_mutableStringClass;

- (id)init;
- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (id)_runArrayHoldingAttributes;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;

@end
