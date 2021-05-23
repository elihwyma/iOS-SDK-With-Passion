/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BKDevicePearl, NSHashTable, NSString;

@interface SBBiometricMonitorPearlDataSource : NSObject

{
    BKDevicePearl *_pearlDevice;
    NSHashTable *_observers;
    _Bool _matching;
    _Bool _faceDetecting;
    _Bool _poseIsMarginal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool presenceDetectRunning;
@property (nonatomic, readonly) _Bool matchRunning;
@property (nonatomic, readonly) _Bool poseIsMarginal;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)_forEachObserver:(CDUnknownBlockType)arg1;
- (id)initWithPearlDevice:(id)arg1;
- (void)_setMatching:(_Bool)arg1;
- (void)_setFaceDetecting:(_Bool)arg1;
- (void)_setPoseIsMarginal:(_Bool)arg1;
- (void)_updateFaceDetecting;
- (void)_updateMatching;

@end
