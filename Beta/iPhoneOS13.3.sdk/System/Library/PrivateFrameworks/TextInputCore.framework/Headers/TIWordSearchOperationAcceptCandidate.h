/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation

{
    void *_mecabraCandidate;
    _Bool _partialCandidate;
    TIMecabraWrapper *_mecabraWrapper;
}

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (nonatomic, getter=isPartialCandidate) _Bool partialCandidate;

- (void)dealloc;
- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void *)arg2 isPartial:(_Bool)arg3;

@end
