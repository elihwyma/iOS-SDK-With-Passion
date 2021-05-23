/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class NSArray, NSMutableArray, NSMutableIndexSet;

@protocol CNScheduler;

@interface _CNCombineLatestObservable : CNObservable

{
    NSArray *_observables;
    NSMutableArray *_results;
    NSMutableArray *_tokens;
    NSMutableIndexSet *_activeObservableIndexes;
    NSMutableIndexSet *_silentObservableIndexes;
    id <CNScheduler> _resultScheduler;
}

@property (nonatomic, readonly) NSArray *observables;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) NSMutableArray *tokens;
@property (nonatomic, readonly) NSMutableIndexSet *activeObservableIndexes;
@property (nonatomic, readonly) NSMutableIndexSet *silentObservableIndexes;
@property (nonatomic, readonly) id <CNScheduler> resultScheduler;

- (id)subscribe:(id)arg1;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (id)initWithObservables:(id)arg1;
- (id)initWithObservables:(id)arg1 resultScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (void)observableAtIndex:(unsigned long long)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3;
- (void)observableAtIndexDidComplete:(unsigned long long)arg1 forObserver:(id)arg2;
- (void)observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3;

@end
