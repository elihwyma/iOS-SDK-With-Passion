/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSVoiceTriggerEnrollmentDataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;
+ (void)saveRawUtteranceAndMetadata:(id)arg1 to:(id)arg2 isExplicitEnrollment:(_Bool)arg3;
+ (_Bool)saveUtteranceAndMetadata:(id)arg1 atDirectory:(id)arg2 isExplicitEnrollment:(_Bool)arg3;
+ (_Bool)saveMetadata:(id)arg1 isExplicitEnrollment:(_Bool)arg2;
+ (_Bool)saveUtterance:(id)arg1 utteranceAudioPath:(id)arg2 numSamplesToWrite:(unsigned long long)arg3 isExplicitEnrollment:(_Bool)arg4;
+ (_Bool)writeMetaDict:(id)arg1 atMetaPath:(id)arg2;

@end
