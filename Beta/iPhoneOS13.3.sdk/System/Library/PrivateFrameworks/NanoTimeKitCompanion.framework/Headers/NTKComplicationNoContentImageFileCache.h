/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKComplicationNoContentImageFileCache : NSObject

{
    NSMutableDictionary *_complicationNoContentImages;
    _Bool _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)_flushCache;
- (void)_dirtyCache;
- (id)imageForClientIdentifier:(id)arg1 family:(long long)arg2;
- (void)setImage:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (id)noContentImagesForClientIdentifier:(id)arg1;
- (void)setNoContentImages:(id)arg1 forClientIdentifier:(id)arg2;
- (void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)arg1;

@end
