/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@interface VMConfiguration : NSObject

+ (float)confidenceThreshold;
+ (id)confidenceThresholdFromAsset;
+ (id)confidenceThresholdFromDefaultsForKey:(id)arg1;
+ (id)confidenceLowQualityThresholdFromAsset;
+ (id)confidenceSegmentThresholdFromAsset;
+ (id)confidenceThresholdFromAssetForKey:(id)arg1;
+ (id)localeForTranscriptionLanguage;
+ (id)metadataDictionaryForSpeechAssetWithLanguage:(id)arg1;
+ (float)confidenceLowQualityThreshold;
+ (float)confidenceSegmentThreshold;

@end
