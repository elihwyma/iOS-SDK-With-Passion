/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTextContentManager.h>

@class NSAttributedString, NSCountableTextRange, NSRunStorage, NSStorage, NSString, NSTextStorage;

@interface NSTextContentStorage : NSTextContentManager

{
    NSAttributedString *_attributedString;
    NSTextStorage *_textStorage;
    NSCountableTextRange *_documentRange;
    NSRunStorage *_indexTable;
    NSStorage *_elements;
    struct _NSRange _cachedRange;
    struct _NSRange _modifiedRange;
    long long _modifiedDocumentLengthDelta;
    struct {
        id *_field1;
        struct _NSRange _field2;
        id _field3[64];
        long long _field4;
        struct _NSRange _field5;
        unsigned long long _field6;
        long long _field7;
        _Bool _field8;
    } *_activeEnumerationCache;
}

@property (readonly) NSCountableTextRange *documentRange;
@property (copy) NSAttributedString *attributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSTextStorage *textStorage;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (_Bool)synchronizeToBackingStore:(CDUnknownBlockType)arg1;
- (void)_commonInitialization;
- (void)updateRangesForTextElement:(id)arg1 locationDelta:(long long)arg2;
- (void)beginEditingTransaction;
- (void)endEditingTransaction;
- (id)attributedStringForTextElement:(id)arg1;
- (id)textElementForAttributedString:(id)arg1;
- (id)attributedStringForTextElements:(id)arg1;
- (id)textElementsForAttributedString:(id)arg1;

@end
