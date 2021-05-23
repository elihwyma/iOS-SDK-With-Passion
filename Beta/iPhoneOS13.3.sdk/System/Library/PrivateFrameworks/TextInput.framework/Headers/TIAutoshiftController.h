/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class TITextInputTraits;

@interface TIAutoshiftController : NSObject

{
    _Bool _enabled;
    TITextInputTraits *_textInputTraits;
}

@property (nonatomic, readonly) TITextInputTraits *textInputTraits;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)initWithTextInputTraits:(id)arg1;
- (unsigned long long)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2;
- (_Bool)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2;

@end
