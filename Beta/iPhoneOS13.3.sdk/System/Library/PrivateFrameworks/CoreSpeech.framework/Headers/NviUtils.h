/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface NviUtils : NSObject

+ (id)timeStampString;
+ (id)strRepForNviSignalType:(unsigned long long)arg1;
+ (id)strRepForNviDataSourceType:(unsigned long long)arg1;
+ (_Bool)isNviEnabled;
+ (id)strRepForNviSignalMask:(unsigned long long)arg1;
+ (unsigned long long)nviSignalTypeForStr:(id)arg1;
+ (unsigned long long)nviDataSourceTypeForStr:(id)arg1;
+ (_Bool)_createDirAtPath:(id)arg1;
+ (long long)getVoiceTriggerEndSampleCountFromVTEI:(id)arg1;
+ (double)getVoiceTriggerEndSecsFromVTEI:(id)arg1;
+ (id)readJsonDictionaryAt:(id)arg1;
+ (id)getValueFromDictionaryOfDictionaries:(id)arg1 keypath:(id)arg2;
+ (_Bool)createDirAtPath:(id)arg1;

@end
