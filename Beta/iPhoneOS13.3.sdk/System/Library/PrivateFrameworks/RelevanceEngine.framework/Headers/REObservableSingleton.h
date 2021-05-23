/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class REObserverStore;

@interface REObservableSingleton : RESingleton

{
    REObserverStore *_store;
}

@property (nonatomic, readonly) unsigned long long numberOfObservers;

- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;

@end
