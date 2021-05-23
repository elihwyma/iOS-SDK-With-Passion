/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKTimeOffsetManager : NSObject

{
    double _timeOffset;
}

@property (nonatomic) double timeOffset;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)displayTimeForRealTime:(id)arg1;
- (id)faceDisplayTime;
- (void)_loadTimeOffset;
- (void)_handleFaceDefaultsChanged;
- (void)_handleFaceLibraryReloaded;
- (void)_updateTimeOffset:(_Bool)arg1;
- (void)forceUpdateTimeOffset;

@end
