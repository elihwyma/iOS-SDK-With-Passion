/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFileLogger : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (id)_audioLogDirectory;
- (id)_timeStampString;
- (id)_metaFilenameWithPrefix:(id)arg1;
- (void)_writeDictionary:(id)arg1 toPath:(id)arg2;
- (void)_clearOldLoggingFiles;

@end
