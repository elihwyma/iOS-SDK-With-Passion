//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@class NSLocale, NSMutableDictionary, NSString;

@interface AXMTaggedText : NSMutableAttributedString
{
    NSMutableAttributedString *_attrString;
    NSMutableDictionary *_globalAttributes;
    id /* CDUnknownBlockType */ _evaluationBlock;
}

+ (id)textWithString:(id)arg1 locale:(id)arg2 evaluationBlock:(id /* CDUnknownBlockType */)arg3;
// - (void).cxx_destruct;
- (void)setAttributes:(id)arg1 range:(NSRange)arg2;
- (void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2;
- (id)mutableString;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)attributesAtIndex:(NSUInteger)arg1 effectiveRange:(NSRange )arg2;
- (id)string;
- (id)debugDescription;
- (id)description;
- (id)_substringWithRange:(NSRange)arg1;
- (NSRange)_stringRange;
- (void)_evaluateIfNeeded;
- (BOOL)_isEvaluated;
- (void)_setNeedEvaluation;
@property(readonly, nonatomic) NSString *speakableText;
- (BOOL)isRangeSpeakable:(NSRange)arg1;
@property(readonly, nonatomic) NSLocale *locale;
@property(nonatomic, getter=isSpeakable) BOOL speakable;
- (void)addTag:(id)arg1 withToken:(id)arg2 range:(NSRange)arg3;
- (void)addReplacementTag:(id)arg1 withToken:(id)arg2 range:(NSRange)arg3;
- (BOOL)hasGlobalTag:(id)arg1;
- (void)removeGlobalTag:(id)arg1;
- (void)addGlobalTag:(id)arg1;
- (id)_initWithAttributedString:(id)arg1;

@end
