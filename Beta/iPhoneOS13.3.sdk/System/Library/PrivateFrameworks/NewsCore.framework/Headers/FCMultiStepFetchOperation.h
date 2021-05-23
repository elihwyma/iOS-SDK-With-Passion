/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchOperation.h>

@class NFMutexLock, NSMutableArray;

@interface FCMultiStepFetchOperation : FCFetchOperation

{
    NSMutableArray *_steps;
    NSMutableArray *_stepResults;
    NFMutexLock *_accessLock;
}

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (id)init;
- (void)performOperation;
- (void)_performNextStep;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (void)addFetchStep:(SEL)arg1;
- (void)addNonCriticalFetchStep:(SEL)arg1;

@end
