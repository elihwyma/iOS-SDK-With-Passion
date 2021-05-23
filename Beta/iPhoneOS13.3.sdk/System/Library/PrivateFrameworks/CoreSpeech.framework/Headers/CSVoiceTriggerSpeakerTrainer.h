/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSVoiceTriggerSpeakerTrainer : NSObject

+ (id)sharedTrainer;

- (_Bool)trainUtterance:(id)arg1 languageCode:(id)arg2 withAsset:(id)arg3;
- (_Bool)trainUtterance:(id)arg1 languageCode:(id)arg2;

@end
