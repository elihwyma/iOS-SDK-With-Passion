/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NTKPhotoAlbumObserver : NSObject

{
    NSMutableDictionary *_deviceAlbumObservers;
}

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1 forDevice:(id)arg2;
- (void)removeObserver:(id)arg1 forDevice:(id)arg2;
- (void)_startOrStopObservingIfNecessaryForDevice:(id)arg1;

@end
