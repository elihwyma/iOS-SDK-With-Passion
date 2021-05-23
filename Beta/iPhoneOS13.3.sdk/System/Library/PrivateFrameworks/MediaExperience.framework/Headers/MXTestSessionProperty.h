/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <MediaExperience/MXTestSessionFactory.h>

__attribute__((visibility("hidden")))
@interface MXTestSessionProperty : MXTestSessionFactory

{
    struct opaqueCMSession *mSession;
}

- (int)verifyClientPriority:(unsigned int)arg1;
- (int)verifyAudioHWControlFlags:(unsigned int)arg1;
- (int)verifyInterruptionStyle:(unsigned int)arg1;
- (int)verifyAudioCategoryBehavior:(struct opaqueCMSession *)arg1 isMixable:(struct __CFBoolean *)arg2 postsResumableInterruption:(unsigned char)arg3 isPlayAndRecord:(unsigned char)arg4 withBluetooth:(unsigned char)arg5 andIsDefaultToSpeaker:(unsigned char)arg6;
- (int)verifyCategoryCustomization:(unsigned char)arg1 andBuiltInRoute:(struct __CFString *)arg2;
- (int)verifyOverrideRoute:(unsigned char)arg1;
- (int)testClientName;
- (int)testIsAudioSession;
- (int)testAudioSessionID;
- (int)testIsFigInstantiatedAudioSession;
- (int)testClientType;
- (int)testClientPriority;
- (int)testAudioHardwareControlFlags;
- (int)testInterruptionStyle;
- (int)testAudioCategory;
- (int)testAudioMode;
- (int)testCategoryCustomizationEnableBluetoothRecording;
- (int)testCategoryCustomizationDefaultBuiltInRoute;
- (int)testOverrideRoute;

@end
