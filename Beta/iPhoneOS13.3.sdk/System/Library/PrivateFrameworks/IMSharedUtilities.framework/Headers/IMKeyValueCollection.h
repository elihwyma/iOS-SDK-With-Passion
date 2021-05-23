/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

#import <IMSharedUtilities/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@protocol IMKeyValueCollectionDelegate, IMKeyValueCollectionStorage;

@interface IMKeyValueCollection : NSObject <Swift>

{
    long long _batchCount;
    id <IMKeyValueCollectionStorage> _keyValueStorage;
    id <IMKeyValueCollectionDelegate> _delegate;
    NSMutableDictionary *_recordedChanges;
}

@property (readonly) NSMutableDictionary *recordedChanges;
@property (nonatomic, readonly) id <IMKeyValueCollectionStorage> keyValueStorage;
@property (weak, nonatomic) id <IMKeyValueCollectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setError:(id)arg1 forKey:(id)arg2;
- (id)errorForKey:(id)arg1;
- (void)addErrorToArray:(id)arg1 forKey:(id)arg2;
- (id)errorArrayForKey:(id)arg1;
- (id)initWithKeyValueStorage:(id)arg1;
- (void)_notifyListeners;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_recordChange:(id)arg1 forKey:(id)arg2;
- (void)_broadcastIfNeeded;
- (id)objectForKey:(id)arg1 withDefault:(id)arg2;
- (_Bool)boolForKey:(id)arg1 withDefault:(_Bool)arg2;
- (long long)integerForKey:(id)arg1 withDefault:(long long)arg2;
- (long long)int64ForKey:(id)arg1 withDefault:(long long)arg2;
- (unsigned long long)uint64ForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (double)doubleForKey:(id)arg1 withDefault:(double)arg2;
- (id)stringForKey:(id)arg1 withDefault:(id)arg2;
- (void)_startBatchWrite;
- (void)_commitBatchWrite;
- (long long)int64ForKey:(id)arg1;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (unsigned long long)uint64ForKey:(id)arg1;
- (void)setUint64:(long long)arg1 forKey:(id)arg2;

@end
