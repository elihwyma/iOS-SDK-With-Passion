/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSConfig : NSObject

+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned long long)channelForProcessedInput;
+ (float)remoteVADDuration;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (long long)inputRecordingEncoderAudioQuality;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (double)inputRecordingBufferDuration;
+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)channelForOutputReference;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (int)csAudioProcessingQueuePriority;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned long long)serverLoggingChannelBitset;

@end
