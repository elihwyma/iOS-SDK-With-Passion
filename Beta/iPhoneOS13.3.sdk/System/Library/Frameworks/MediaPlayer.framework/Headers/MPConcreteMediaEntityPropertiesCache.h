/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol MPMediaLibraryDataProvider, OS_dispatch_queue;

@interface MPConcreteMediaEntityPropertiesCache : NSObject

{
    Class _dataProviderEntityClass;
    long long _identifier;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_valuePersistenceBlocks;
    NSObject<OS_dispatch_queue> *_propertiesQueue;
    id <MPMediaLibraryDataProvider> _dataProvider;
}

@property (weak, nonatomic, readonly) id <MPMediaLibraryDataProvider> dataProvider;
@property (nonatomic, readonly) Class dataProviderEntityClass;
@property (nonatomic, readonly) long long identifier;

- (void)dealloc;
- (void)invalidate;
- (void)delete;
- (void)cachePropertyValues:(id)arg1 forProperties:(id)arg2 persistValueInBackgroundBlock:(CDUnknownBlockType)arg3;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2 persistValueInBackgroundBlock:(CDUnknownBlockType)arg3;
- (id)valueForProperty:(id)arg1 isCached:(_Bool *)arg2;
- (id)initWithLibraryDataProvider:(id)arg1 dataProviderEntityClass:(Class)arg2 identifier:(long long)arg3;
- (void)_onBarrierCacheValues:(id)arg1 persistValueInBackgroundBlock:(CDUnknownBlockType)arg2;

@end
