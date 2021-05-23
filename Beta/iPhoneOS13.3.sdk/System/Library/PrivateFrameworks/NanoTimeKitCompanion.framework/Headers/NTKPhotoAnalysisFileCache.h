/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKPhotoAnalysisFileCache : NSObject

{
    NSMutableDictionary *_cache;
    int _sequenceNumber;
    _Bool _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)_load;
- (_Bool)_save;
- (id)photoAnalysisForIdentifier:(id)arg1;
- (void)setPhotoAnalysis:(id)arg1 forIdentifier:(id)arg2;
- (void)_dirtyCache;

@end
