/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFObservable : NSObject

+ (id)merge:(id)arg1;
+ (id)observableWithError:(id)arg1;
+ (id)observableWithBlock:(CDUnknownBlockType)arg1;
+ (id)emptyObservable;
+ (id)observableWithResult:(id)arg1;
+ (id)observableWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 scheduler:(id)arg5;
+ (id)observableWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;
+ (id)observableWithResults:(id)arg1 scheduler:(id)arg2;
+ (id)observableWithResults:(id)arg1;
+ (id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2;
+ (id)concatenate:(id)arg1;
+ (id)observableWithFuture:(id)arg1;
+ (id)neverObservable;
+ (id)combineLatest:(id)arg1;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableObserver;
+ (id)observableAfterDelay:(double)arg1 interval:(double)arg2 scheduler:(id)arg3;
+ (id)observableOnNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3;
+ (id)observableAfterDelay:(double)arg1 scheduler:(id)arg2;
+ (id)observableOnNotifyTokenWithName:(id)arg1;

- (id)publish;
- (id)first;
- (id)doOnError:(CDUnknownBlockType)arg1;
- (id)doOnCompletion:(CDUnknownBlockType)arg1;
- (id)doOnCancel:(CDUnknownBlockType)arg1;
- (id)allObjects:(id *)arg1;
- (id)doOnTerminate:(CDUnknownBlockType)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)observeOn:(id)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)take:(unsigned long long)arg1;
- (id)subscribeOn:(id)arg1;
- (id)sampleWithObservable:(id)arg1;
- (id)startWith:(id)arg1 scheduler:(id)arg2;
- (id)delay:(double)arg1 scheduler:(id)arg2;
- (id)distinctUntilChanged;
- (id)doOnNext:(CDUnknownBlockType)arg1;
- (id)doOnSubscribe:(CDUnknownBlockType)arg1;
- (id)skip:(unsigned long long)arg1;
- (id)startWith:(id)arg1;
- (id)subscribeWithResultBlock:(CDUnknownBlockType)arg1;
- (id)replay:(unsigned long long)arg1;
- (id)debounceWithTimeInterval:(double)arg1 scheduler:(id)arg2;
- (id)debounceWithTimeInterval:(double)arg1;
- (id)multicast:(id)arg1;
- (id)sampleWithTimeInterval:(double)arg1 scheduler:(id)arg2;
- (id)replay;
- (id)sampleWithTimeInterval:(double)arg1;

@end
