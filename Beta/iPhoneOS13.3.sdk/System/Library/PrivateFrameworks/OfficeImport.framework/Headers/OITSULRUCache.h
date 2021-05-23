/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface OITSULRUCache : NSObject

{
    OITSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    unsigned long long mMax;
    id mCallbackTarget;
    SEL mCallback;
}

@property (nonatomic, readonly) unsigned long long maxSize;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *allValues;
@property (nonatomic, readonly) NSArray *allKeys;

- (void)dealloc;
- (id)description;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (void)p_removeOldestObject;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)clearEvictionCallbackTarget;

@end
