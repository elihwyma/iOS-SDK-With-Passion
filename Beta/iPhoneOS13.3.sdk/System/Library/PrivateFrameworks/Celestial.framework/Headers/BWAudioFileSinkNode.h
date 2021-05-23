/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFileSinkNode.h>

@class FigCaptureAudioFileRecordingSettings, FigStateMachine, NSObject;

@protocol OS_dispatch_queue;

@interface BWAudioFileSinkNode : BWFileSinkNode

{
    FigStateMachine *_stateMachine;
    struct OpaqueFigFormatWriter *_formatWriter;
    struct OpaqueCMByteStream *_byteStream;
    int _trackID;
    _Bool _didBeginFileWriterSession;
    char *_parentPath;
    FigCaptureAudioFileRecordingSettings *_settings;
    CDStruct_1b6d18a9 _curFileDuration;
    unsigned long long _curFileSize;
    unsigned long long _adjustedMinFreeDiskSpace;
    NSObject<OS_dispatch_queue> *_propertySyncQueue;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithSinkID:(id)arg1;
- (void)_setupStateMachine;
- (void)_stopRecordingWithError:(int)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (int)_handleMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)_applyRecordingLimits;
- (void)_updateFilePropertiesForSbuf:(struct opaqueCMSampleBuffer *)arg1;
- (int)_setupFileWriter;
- (void)_setupMinFreeDiskSpace;
- (int)_teardownFileWriter;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (CDStruct_1b6d18a9)lastFileDuration;
- (unsigned long long)lastFileSize;

@end
