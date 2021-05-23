/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MOVStreamWriterStateRecording : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long writerStatus;

- (void)activateWithContext:(id)arg1;
- (id)prepareRecording:(id)arg1;
- (_Bool)canConfigure:(id)arg1;
- (_Bool)canAppendData:(id)arg1;
- (_Bool)canWriteData:(id)arg1;
- (_Bool)stopWriterWhenFifosAreEmpty:(id)arg1;
- (id)prepareFinished:(id)arg1;
- (id)finishRecording:(id)arg1;
- (id)forceFinishRecording:(id)arg1;
- (id)nextFinishStep:(id)arg1;
- (id)cancelRecording:(id)arg1;
- (id)finishedCancelRecording:(id)arg1;
- (id)criticalErrorOccurred:(id)arg1 context:(id)arg2;

@end
