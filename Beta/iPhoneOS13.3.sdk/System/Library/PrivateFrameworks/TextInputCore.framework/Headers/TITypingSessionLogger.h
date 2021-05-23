/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

#import <TextInputCore/Swift-Protocol.h>

@class NSMutableArray, NSString;

@protocol TIKeyboardInteractionProtocol;

@interface TITypingSessionLogger : NSObject <Swift>

{
    id <TIKeyboardInteractionProtocol> _typingSession;
    NSMutableArray *_typingEvents;
}

@property (readonly) unsigned long long eventCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)typingSession;
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
- (void)addTouchEvent:(id)arg1;
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(_Bool)arg6 useCandidateSelection:(_Bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
- (void)contextDidChange:(id)arg1 wordDelete:(_Bool)arg2 cursorMoved:(_Bool)arg3 extendsPriorWord:(_Bool)arg4 inWord:(id)arg5 range:(struct _NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;
- (id)initWithTypingSession:(id)arg1;
- (void)sendTo:(id)arg1;

@end
