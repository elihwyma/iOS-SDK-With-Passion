/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MXTestSessionFactory : NSObject

{
    struct __CFString *mAudioCategory;
    struct opaqueCMSession *mSession;
    struct OpaqueFigSemaphore *mSemaphore;
    CDUnknownFunctionPointerType mCallback;
    struct __CFString *mFileName;
    void *mCMSessionTrace;
    void *mVolumeTrace;
    struct __CFString *mFigNotes;
    struct __CFString *mFigNotesLog;
    struct __CFDictionary *mConfigMap;
    unsigned char mEnableLogging;
    unsigned char mForceCleanStart;
    struct __CFString *mCMSLoggingLevel;
    struct __CFString *mVolumeLoggingLevel;
    unsigned char _hasPhoneCallCapability;
    unsigned char _hasPlayAndRecordCapability;
    unsigned char _hasHapticsCapability;
    int _deviceType;
}

@property unsigned char hasPhoneCallCapability;
@property unsigned char hasPlayAndRecordCapability;
@property unsigned char hasHapticsCapability;
@property int deviceType;

- (int)signalSemaphore;
- (void)setNotificationCallback:(CDUnknownFunctionPointerType)arg1;
- (int)setAndVerifyProperty:(int)arg1 propertyName:(struct __CFString *)arg2 andValue:(void *)arg3 sessionToSet:(struct opaqueCMSession *)arg4;
- (int)checkSessionActiveState:(unsigned char)arg1 sessionToCheck:(struct opaqueCMSession *)arg2;
- (struct opaqueCMSession *)createCustomSession:(struct __CFString *)arg1 withMode:(struct __CFString *)arg2 withInterruptionStyle:(unsigned int)arg3 andHostId:(struct __CFString *)arg4;
- (int)getExpectedInterruptionStyleBehavior:(unsigned int)arg1 givesBehavior:(CDStruct_f4b747e6 *)arg2;
- (int)activateAndPlaySession:(struct opaqueCMSession *)arg1;
- (int)checkSessionDuckedState:(unsigned char)arg1 sessionToCheck:(struct opaqueCMSession *)arg2;
- (int)addNotificationListener:(struct opaqueCMSession *)arg1 notificationName:(struct __CFString *)arg2 listener:(const void *)arg3;
- (int)deactivateAndStopSession:(struct opaqueCMSession *)arg1 replacementStatusResumable:(unsigned char)arg2;
- (int)waitOnSemaphore;
- (int)removeNotificationListener:(struct opaqueCMSession *)arg1 notificationName:(struct __CFString *)arg2 listener:(const void *)arg3;
- (struct opaqueCMSession *)createMusicSession;
- (int)activateSession:(struct opaqueCMSession *)arg1;
- (void)setup:(struct __CFString *)arg1 cmsLoggingLevel:(struct __CFString *)arg2 volumeLoggingLevel:(struct __CFString *)arg3;
- (struct opaqueCMSession *)createDefaultSession;
- (void)teardown:(int)arg1 testName:(struct __CFString *)arg2;
- (struct opaqueCMSession *)createGameSession;
- (struct opaqueCMSession *)createPodcastSession;
- (struct opaqueCMSession *)createPhoneCallSession;
- (struct opaqueCMSession *)createPreConfiguredCustomSession:(int)arg1;
- (void)createSemaphore;
- (struct opaqueCMSession *)createAlarmSession;
- (struct opaqueCMSession *)createAmbientSession;
- (struct opaqueCMSession *)createSiriSession;
- (struct opaqueCMSession *)createNavigationSession;
- (int)testSessionFactory;
- (struct opaqueCMSession *)createFacetimeAudioSession;
- (struct opaqueCMSession *)createThirdPartyMusicSession;
- (struct opaqueCMSession *)createRingtonePreviewSession;
- (struct opaqueCMSession *)createCameraPhotoSession;
- (struct opaqueCMSession *)createCameraRecordingSession;
- (struct opaqueCMSession *)createVoiceMemoSession;
- (struct opaqueCMSession *)createFacetimeVideoSession;
- (struct opaqueCMSession *)createEmergencyAlertSession;
- (struct opaqueCMSession *)createEmergencyAlertMuteableSession;
- (struct opaqueCMSession *)createThirdPartyPhonecallSession;
- (struct opaqueCMSession *)createThirdPartyNavigationSession;
- (struct opaqueCMSession *)createThirdPartyVideocallSession;
- (struct opaqueCMSession *)createThirdPartyPodcastSession;
- (int)addAndVerifyNumberToDictionary:(struct __CFDictionary *)arg1 numberType:(long long)arg2 forKey:(const void *)arg3 andValue:(const void *)arg4;
- (int)setPlayingState:(struct __CFBoolean *)arg1 sessionToSet:(struct opaqueCMSession *)arg2;
- (int)checkSessionPlayingState:(unsigned char)arg1 sessionToCheck:(struct opaqueCMSession *)arg2;
- (int)setAndVerifyPriority:(int)arg1 sessionToSet:(struct opaqueCMSession *)arg2;
- (int)setAndVerifyInterruptionStyle:(unsigned int)arg1 sessionToSet:(struct opaqueCMSession *)arg2;
- (int)setupSystemSoundDictionary:(struct __CFDictionary **)arg1 withSSID:(int)arg2 andPID:(int)arg3 ignoreRingerSwitch:(unsigned char)arg4;
- (int)checkSessionNowPlayingState:(unsigned char)arg1 sessionToCheck:(struct opaqueCMSession *)arg2;
- (int)checkSystemSoundActiveState:(unsigned char)arg1;
- (int)copySystemSoundCategoryForSSID:(unsigned int)arg1 resultName:(const struct __CFString **)arg2;

@end
