/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSXPCStoreNotificationObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    id _store;
}

- (void)dealloc;
- (void)setStore:(id)arg1;
- (id)_store;
- (id)initForObservationWithName:(id)arg1 store:(id)arg2;

@end
