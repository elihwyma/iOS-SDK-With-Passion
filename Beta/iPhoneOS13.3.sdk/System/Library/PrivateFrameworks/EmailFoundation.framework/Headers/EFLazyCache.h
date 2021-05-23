/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSCache, NSRecursiveLock, NSString;

@protocol EFLazyCacheDelegate;

@interface EFLazyCache : NSObject

{
    NSRecursiveLock *_lock;
    NSCache *_storage;
    struct {
        unsigned int delegateRespondsToLazyCacheWillEvictObject:1;
    } _flags;
    id <EFLazyCacheDelegate> _delegate;
}

@property (weak, nonatomic) id <EFLazyCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)initWithCountLimit:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1 generator:(CDUnknownBlockType)arg2;
- (id)cachedObjectForKey:(id)arg1;
- (void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3;
- (id)storedObjectForKey:(id)arg1;
- (long long)waiterCountForKey:(id)arg1;

@end
