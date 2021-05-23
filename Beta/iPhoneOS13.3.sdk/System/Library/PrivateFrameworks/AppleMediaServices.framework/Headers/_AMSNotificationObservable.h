/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSObservable.h>

__attribute__((visibility("hidden")))
@interface _AMSNotificationObservable : AMSObservable

- (_Bool)cancel;
- (_Bool)sendCompletion;
- (id)initWithNotification:(id)arg1 object:(id)arg2;
- (void)_receivedNotification:(id)arg1;

@end
