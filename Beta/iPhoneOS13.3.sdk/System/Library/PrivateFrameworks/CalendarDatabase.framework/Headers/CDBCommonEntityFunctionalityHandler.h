/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface CDBCommonEntityFunctionalityHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableSet *_destructionObservers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lock;
@property (retain, nonatomic) NSMutableSet *destructionObservers;

+ (void)_notifyDestructionObservers:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)removeDestructionObserver:(struct CalRelation *)arg1;
- (void)addDestructionObserver:(struct CalRelation *)arg1;
- (void)notifyOfEntityDestruction;

@end
