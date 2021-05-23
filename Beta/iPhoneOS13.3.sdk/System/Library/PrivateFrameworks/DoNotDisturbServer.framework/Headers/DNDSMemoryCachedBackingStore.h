/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol DNDSBackingStore, DNDSBackingStoreDelegate, DNDSBackingStoreRecord;

@interface DNDSMemoryCachedBackingStore : NSObject

{
    id <DNDSBackingStore> _underlyingBackingStore;
    id <DNDSBackingStoreRecord> _cache;
    struct os_unfair_lock_s _lock;
    id <DNDSBackingStoreDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <DNDSBackingStoreDelegate> delegate;

- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (id)readRecordWithError:(id *)arg1;
- (unsigned long long)writeRecord:(id)arg1 error:(id *)arg2;
- (id)initWithUnderlyingBackingStore:(id)arg1;

@end
