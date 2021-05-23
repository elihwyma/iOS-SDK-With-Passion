/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSMutableAttributedString.h>

@class NSLocale, NSMutableDictionary, NSString;

@interface AXMTaggedText : NSMutableAttributedString

{
    NSMutableAttributedString *_attrString;
    NSMutableDictionary *_globalAttributes;
    CDUnknownBlockType _evaluationBlock;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, getter=isSpeakable) _Bool speakable;
@property (nonatomic, readonly) NSString *speakableText;

+ (id)textWithString:(id)arg1 locale:(id)arg2 evaluationBlock:(CDUnknownBlockType)arg3;

- (id)string;
- (id)description;
- (id)debugDescription;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)mutableString;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (void)_evaluateIfNeeded;
- (_Bool)hasGlobalTag:(id)arg1;
- (void)addGlobalTag:(id)arg1;
- (void)removeGlobalTag:(id)arg1;
- (struct _NSRange)_stringRange;
- (_Bool)_isEvaluated;
- (id)_substringWithRange:(struct _NSRange)arg1;
- (id)_initWithAttributedString:(id)arg1;
- (void)addReplacementTag:(id)arg1 withToken:(id)arg2 range:(struct _NSRange)arg3;
- (void)addTag:(id)arg1 withToken:(id)arg2 range:(struct _NSRange)arg3;
- (_Bool)isRangeSpeakable:(struct _NSRange)arg1;
- (void)_setNeedEvaluation;

@end
