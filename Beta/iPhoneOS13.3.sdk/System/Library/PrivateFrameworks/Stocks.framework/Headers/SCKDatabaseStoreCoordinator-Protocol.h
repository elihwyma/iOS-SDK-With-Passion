/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@protocol SCKDatabaseStore;

@protocol SCKDatabaseStoreCoordinator

@property (nonatomic, readonly) id <SCKDatabaseStore> underlyingStore;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)readWithAccessor: /* Error: Ran out of types for this method. */;
- (unsigned short)writeWithAccessor: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadWithAccessor: /* Error: Ran out of types for this method. */;
- (unsigned short)readZone:withAccessor: /* Error: Ran out of types for this method. */;
- (unsigned short)writeZone:withAccessor: /* Error: Ran out of types for this method. */;

@end
