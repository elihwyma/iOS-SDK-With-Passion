/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSTextStorage;

__attribute__((visibility("hidden")))
@interface _UISearchBarTextFieldTokenCounter : NSObject

{
    id _textStorageObservation;
    NSTextStorage *_textStorage;
    NSMutableIndexSet *_tokenCharacterIndexes;
}

@property (nonatomic, readonly) NSIndexSet *tokenCharacterIndexes;
@property (nonatomic, readonly) struct _NSRange characterRangeOfAllTokens;

- (id)tokenAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)characterRangeOfTextAfterLastToken;
- (unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)arg1;
- (struct _NSRange)subrangeOfTextAfterLastTokenForCharacterRange:(struct _NSRange)arg1;
- (id)initWithTextStorage:(id)arg1;
- (void)_addCharacterIndexesOfTokensInRange:(struct _NSRange)arg1 toIndexSet:(id)arg2;
- (void)_handleProcessEditing;
- (struct _NSRange)characterRangeForSubrangeOfTextAfterLastToken:(struct _NSRange)arg1;
- (unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)arg1;

@end
