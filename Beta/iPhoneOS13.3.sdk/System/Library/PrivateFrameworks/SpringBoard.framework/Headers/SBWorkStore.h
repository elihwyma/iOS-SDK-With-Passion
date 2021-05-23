/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface SBWorkStore : NSObject

{
    NSMutableDictionary *_workItemsPerKey;
    NSMutableArray *_keysWithWork;
    NSMutableDictionary *_workExpirationPeriods;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _maxWorkPerKey;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    double _defaultWorkExpirationPeriod;
}

@property (nonatomic, readonly) NSMutableDictionary *workItemsPerKey;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, readonly) unsigned long long maxWorkPerKey;
@property (nonatomic, readonly) NSArray *keysWithWork;
@property (nonatomic) double defaultWorkExpirationPeriod;

- (id)description;
- (id)debugDescription;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_workQueue_expireWorkForKey:(id)arg1;
- (void)_notifyObserversWorkDidChange;
- (id)dequeueWorkForKey:(id)arg1;
- (id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned long long)arg1;
- (void)addWorkItem:(id)arg1 forKey:(id)arg2;
- (void)purgeWorkForKey:(id)arg1;
- (void)setWorkExpirationPeriod:(double)arg1 forKey:(id)arg2;

@end
