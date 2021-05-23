/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsFoundation/CNObservable.h>

@interface CNObservable (CNAutocomplete)

- (id)localObservableWithScheduler:(id)arg1 doOnTimeout:(CDUnknownBlockType)arg2;
- (id)autocompleteTimeoutAfterDelay:(double)arg1 doOnTimeout:(CDUnknownBlockType)arg2 scheduler:(id)arg3;
- (id)activityIndicatingObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2;
- (id)localObservableWithScheduler:(id)arg1;
- (id)networkObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5;

@end
