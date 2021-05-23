/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSSpeakerModelRetrainer : NSObject

+ (void)_createBackupSpeakerModel:(id)arg1 backupSpeakerModelPath:(id)arg2;
+ (unsigned long long)_revertBackupSpeakerModel:(id)arg1 backupSpeakerModelPath:(id)arg2;
+ (void)_clearModelFile:(id)arg1;
+ (unsigned long long)retrainSpeakerModel:(id)arg1 forVoiceTriggerAsset:(id)arg2;

@end
