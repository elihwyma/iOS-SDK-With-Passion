/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class TITextInputTraits;

@interface TISmartInsertDeleteController : NSObject

{
    _Bool _enabled;
    TITextInputTraits *_textInputTraits;
}

@property (nonatomic, readonly) TITextInputTraits *textInputTraits;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)initWithTextInputTraits:(id)arg1;
- (void)smartDeleteForDocumentState:(id)arg1 outBeforeLength:(unsigned long long *)arg2 outAfterLength:(unsigned long long *)arg3;
- (void)smartInsertForDocumentState:(id)arg1 stringToInsert:(id)arg2 outBeforeString:(id *)arg3 outAfterString:(id *)arg4;
- (unsigned long long)_numberOfCharactersInSet:(id)arg1 atBeginningOfString:(id)arg2;
- (unsigned long long)_numberOfCharactersInSet:(id)arg1 atEndOfString:(id)arg2;

@end
