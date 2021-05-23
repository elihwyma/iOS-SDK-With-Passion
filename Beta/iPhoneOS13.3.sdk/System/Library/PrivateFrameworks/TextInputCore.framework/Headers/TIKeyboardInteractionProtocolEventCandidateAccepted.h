/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>

@class NSString, TIDocumentState, TIKeyboardCandidate, TIKeyboardInput;

@interface TIKeyboardInteractionProtocolEventCandidateAccepted : TIKeyboardInteractionProtocolBase

{
    TIKeyboardCandidate *_candWord;
    TIKeyboardInput *_input;
    TIDocumentState *_documentState;
    NSString *_context;
    NSString *_inputStem;
    _Bool _predictionBarHit;
    _Bool _useCandidateSelection;
    long long _candidateIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;
- (id)initWithCandidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(_Bool)arg6 useCandidateSelection:(_Bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;

@end
