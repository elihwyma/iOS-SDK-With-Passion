/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSMutableArray, NSMutableIndexSet;

@interface _EFCombineLatestObservableSubscription : NSObject

{
    NSLock *_lock;
    NSArray *_observables;
    NSMutableArray *_results;
    NSMutableArray *_tokens;
    NSMutableIndexSet *_activeIndexes;
    NSMutableIndexSet *_silentIndexes;
}

@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) NSArray *observables;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSMutableArray *tokens;
@property (retain, nonatomic) NSMutableIndexSet *activeIndexes;
@property (retain, nonatomic) NSMutableIndexSet *silentIndexes;

- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;
- (void)_observableAtIndex:(unsigned long long)arg1 receivedResult:(id)arg2 observer:(id)arg3;
- (void)_observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;
- (void)_observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 observer:(id)arg3;

@end
