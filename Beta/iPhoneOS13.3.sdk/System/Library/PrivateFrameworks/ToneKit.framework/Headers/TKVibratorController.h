/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSUUID, TLAccessQueue;

@interface TKVibratorController : NSObject

{
    TLAccessQueue *_accessQueue;
    NSUUID *_activePlayRequestIdentifier;
    NSMutableSet *_pendingStopRequestIdentifiers;
}

@property (nonatomic, readonly) unsigned long long vibratorState;

- (id)init;
- (void)dealloc;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
- (void)_turnOffIfAppropriate;
- (unsigned int)_previewVibrationSystemSoundID;
- (void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1;

@end
