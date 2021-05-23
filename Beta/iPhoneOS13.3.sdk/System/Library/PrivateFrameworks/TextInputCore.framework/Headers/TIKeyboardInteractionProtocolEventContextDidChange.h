/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>

@class NSString, TIDocumentState;

@interface TIKeyboardInteractionProtocolEventContextDidChange : TIKeyboardInteractionProtocolBase

{
    TIDocumentState *_documentState;
    _Bool _wordDelete;
    _Bool _cursorMoved;
    _Bool _extendsPriorWord;
    NSString *_word;
    struct _NSRange _inWordRange;
    unsigned long long _selectionLocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;
- (id)initWithContext:(id)arg1 wordDelete:(_Bool)arg2 cursorMoved:(_Bool)arg3 extendsPriorWord:(_Bool)arg4 inWord:(id)arg5 range:(struct _NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;

@end
