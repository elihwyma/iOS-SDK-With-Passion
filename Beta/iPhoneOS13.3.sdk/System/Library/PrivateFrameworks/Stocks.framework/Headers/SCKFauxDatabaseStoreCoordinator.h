/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, SCKDatabaseStore;

@interface SCKFauxDatabaseStoreCoordinator : NSObject

{
    id <SCKDatabaseStore> _store;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) id <SCKDatabaseStore> store;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <SCKDatabaseStore> underlyingStore;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (id)initWithDatabaseStore:(id)arg1;

@end
