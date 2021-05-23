/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaItem.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary, NSObject;

@protocol OS_dispatch_queue;

@interface MPConcreteMediaItem : MPMediaItem <Swift>

{
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
    NSObject<OS_dispatch_queue> *_utilitySerialQueue;
}

@property (retain, nonatomic, readonly) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (_Bool)supportsSecureCoding;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;
+ (id)createUncachedConcreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)incrementPlayCount;
- (id)mediaLibrary;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (_Bool)existsInLibrary;
- (id)valuesForProperties:(id)arg1;
- (_Bool)didSkipWithPlayedToTime:(double)arg1;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;
- (void)incrementSkipCount;
- (void)incrementPlayCountForPlayingToEnd;
- (_Bool)incrementPlayCountForStopTime:(double)arg1;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;
- (double)nominalHasBeenPlayedThreshold;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3;
- (void)invalidateCachedProperties;
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(_Bool *)arg2;
- (id)cachedValueForProperty:(id)arg1 isCached:(_Bool *)arg2;

@end
