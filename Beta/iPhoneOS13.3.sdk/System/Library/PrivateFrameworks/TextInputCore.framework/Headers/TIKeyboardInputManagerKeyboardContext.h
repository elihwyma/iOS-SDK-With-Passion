/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class TIKeyboardOutput, TIKeyboardState, TIRevisionHistory;

@interface TIKeyboardInputManagerKeyboardContext : NSObject

{
    TIKeyboardOutput *_output;
    TIRevisionHistory *_revisionHistory;
    TIKeyboardState *_currentState;
}

@property (nonatomic, readonly) TIKeyboardState *currentState;
@property (nonatomic, readonly) TIKeyboardOutput *output;
@property (retain, nonatomic) TIRevisionHistory *revisionHistory;

- (void)insertText:(id)arg1;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)deleteForward:(unsigned long long)arg1;
- (void)unmarkText:(id)arg1;
- (void)clearInputForMarkedText;
- (void)acceptCandidate:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;
- (void)deleteTextBackward:(id)arg1;
- (void)deleteHandwritingStrokes:(id)arg1;

@end
