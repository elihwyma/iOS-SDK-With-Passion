/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSPointerArray;

@interface REFeatureValueCounter : NSObject

{
    unsigned long long _count;
    NSPointerArray *_values;
    struct REFancyShrinkingDictionary _indicies;
    struct _opaque_pthread_rwlock_t _lock;
}

@property (nonatomic) unsigned long long count;

- (id)init;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (unsigned long long)totalCount;
- (unsigned long long)countForValue:(id)arg1;
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;
- (void)_updateConfigurationForCount:(unsigned long long)arg1;
- (unsigned long long)trackedValueForValue:(id)arg1;
- (id)_createErrorWithCode:(unsigned long long)arg1 description:(id)arg2 underlyingError:(id)arg3;

@end
