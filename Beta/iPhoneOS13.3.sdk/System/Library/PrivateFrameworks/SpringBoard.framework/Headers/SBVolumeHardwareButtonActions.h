/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface SBVolumeHardwareButtonActions : NSObject

{
    _Bool _volumeIncreaseIsDown;
    _Bool _volumeDecreaseIsDown;
    NSHashTable *_volumePressBandits;
    CDUnknownBlockType _volumeIncreaseUpEventBlock;
    CDUnknownBlockType _volumeDecreaseUpEventBlock;
}

- (void)addVolumePressBandit:(id)arg1;
- (void)removeVolumePressBandit:(id)arg1;
- (void)cancelVolumePress;
- (void)volumeIncreasePressDown;
- (void)volumeIncreasePressUp;
- (void)volumeDecreasePressDown;
- (void)volumeDecreasePressUp;
- (_Bool)_handleVolumeButtonDownForIncrease:(_Bool)arg1;
- (_Bool)_handleVolumeButtonUpForIncrease:(_Bool)arg1;
- (_Bool)_handleVolumeIncreaseUp;
- (_Bool)_handleVolumeDecreaseUp;
- (_Bool)_sendVolumeButtonToSBUIControllerForIncrease:(_Bool)arg1 down:(_Bool)arg2;
- (_Bool)_sendVolumeButtonDownToSBUIControllerForIncrease:(_Bool)arg1;
- (void)_sendBanditsVolumeIncreased;
- (void)_sendBanditsVolumeDecreased;
- (_Bool)_sendVolumeButtonDownToSpringBoardInternalUIForIncrease:(_Bool)arg1;
- (_Bool)_sendVolumeButtonDownToLegacyRegisteredClientsForIncrease:(_Bool)arg1;

@end
