/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation

{
    void *_mecabraCandidate;
    _Bool _partialCandidate;
    _Bool _prediction;
    TIMecabraEnvironment *_mecabraEnvironment;
}

@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment;
@property (nonatomic, getter=isPartialCandidate) _Bool partialCandidate;
@property (nonatomic, getter=isPrediction) _Bool prediction;

- (void)dealloc;
- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void *)arg2 isPartial:(_Bool)arg3 isPrediction:(_Bool)arg4;

@end
