/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface VTUtteranceMetadataManager : NSObject

+ (_Bool)isUtteranceImplicitlyTrained:(id)arg1;
+ (id)recordedTimeStampOfFile:(id)arg1;
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;
+ (void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2;
+ (void)_saveMetaVersionFileAtPath:(id)arg1;
+ (void)_upgradeLocaleDirectoryIfNecessary:(id)arg1;
+ (_Bool)_audioDirectoryNeedsUpgrade:(id)arg1;
+ (void)_upgradeUtteranceMeta:(id)arg1;
+ (void)saveUtteranceMetadataForUtterance:(id)arg1 isExplicitEnrollment:(_Bool)arg2 isHandheldEnrollment:(_Bool)arg3 withBiometricResult:(unsigned long long)arg4;
+ (void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1;
+ (void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1;

@end
