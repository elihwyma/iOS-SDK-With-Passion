/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXBackgroundSaver, _ATXDataStore;

@interface ATXHistogramTable : NSObject

{
    struct HTGuardedData _private_unsafeGuardedData;
    struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>>> _guardedData;
    _ATXDataStore *_datastore;
    ATXBackgroundSaver *_saver;
    long long _blobType;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)clear;
- (id)allKeys;
- (unsigned short)remove:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)flush;
- (unsigned short)intern:(id)arg1;
- (id)initWithDatastore:(id)arg1;
- (id)initWithDatastore:(id)arg1 blobType:(long long)arg2;
- (id)initWithDict:(id)arg1 usedIds:(id)arg2 datastore:(id)arg3 blobType:(long long)arg4;
- (_Bool)lookup:(id)arg1 into:(unsigned short *)arg2;
- (id)allKeysFilteredBy:(CDUnknownBlockType)arg1;
- (id)histogramTableDict;

@end
