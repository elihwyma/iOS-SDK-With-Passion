/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNTimeballSubscriberStore : NSObject

{
    NSMutableArray *_subscriptions;
    NSLock *_subscriptionsLock;
}

@property (nonatomic, readonly) NSArray *subscriptions;

- (id)init;
- (void)subscribe:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (void)unsubscribeFromDestination:(id)arg1;

@end
