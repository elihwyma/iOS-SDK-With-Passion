/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent : TISKEvent

{
    TIKeyboardCandidate *_candidate;
}

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

- (id)description;
- (void)reportToSession:(id)arg1;
- (id)init:(id)arg1 order:(long long)arg2;

@end
