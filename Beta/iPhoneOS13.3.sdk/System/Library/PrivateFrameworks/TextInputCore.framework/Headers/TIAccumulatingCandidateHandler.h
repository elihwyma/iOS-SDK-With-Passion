/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class TIAutocorrectionList;

@interface TIAccumulatingCandidateHandler : NSObject

{
    unsigned long long _status;
    CDUnknownBlockType _candidateHandler;
    TIAutocorrectionList *_candidates;
}

@property (retain, nonatomic) TIAutocorrectionList *candidates;
@property (copy, nonatomic, readonly) CDUnknownBlockType candidateHandler;
@property (nonatomic, readonly) _Bool asynchronous;

- (void)dealloc;
- (void)open;
- (void)close;
- (void)pushCandidates:(id)arg1;
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;

@end
