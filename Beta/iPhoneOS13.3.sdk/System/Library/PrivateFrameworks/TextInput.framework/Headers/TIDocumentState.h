/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TIDocumentState : NSObject

{
    NSString *_contextBeforeInput;
    NSString *_markedText;
    NSString *_selectedText;
    NSString *_contextAfterInput;
    struct _NSRange _selectedRangeInMarkedText;
}

@property (nonatomic, readonly) NSString *contextBeforeInput;
@property (nonatomic, readonly) NSString *markedText;
@property (nonatomic, readonly) NSString *selectedText;
@property (nonatomic, readonly) NSString *contextAfterInput;
@property (nonatomic, readonly) struct _NSRange selectedRangeInMarkedText;

+ (_Bool)supportsSecureCoding;
+ (id)_selectedTextByDeletingInteriorSentences:(id)arg1;
+ (id)_contextStringByTrimmingSuccedingLines:(id)arg1;
+ (id)_contextStringByTrimmingPrecedingLines:(id)arg1;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange)arg3 contextAfter:(id)arg4;
+ (id)_string:(id)arg1 byTrimmingWordsBeforeIndex:(unsigned long long)arg2;
+ (id)_string:(id)arg1 byTrimmingWordsAfterIndex:(unsigned long long)arg2;
+ (id)documentStateForTestingWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;
+ (id)documentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)unboundedDocumentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnboundedContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 unboundedContextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;
- (_Bool)documentIsEmpty;
- (id)documentStateAfterInsertingText:(id)arg1;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)documentStateAfterUnmarkingText;
- (id)documentStateAfterCursorAdjustment:(long long)arg1;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;
- (id)documentStateAfterDeletingForward;
- (id)inputStemWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2;
- (id)inputStringWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2;
- (id)documentStateAfterCollapsingSelection;
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(CDUnknownBlockType)arg2 reverse:(_Bool)arg3;
- (unsigned long long)inputIndexWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (_Bool)deletingBackwardsWillRemoveText;

@end
