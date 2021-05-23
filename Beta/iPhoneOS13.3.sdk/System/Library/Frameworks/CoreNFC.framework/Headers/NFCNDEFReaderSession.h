/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCReaderSession.h>

@class NSString;

@interface NFCNDEFReaderSession : NFCReaderSession

{
    _Bool _invalidateAfterFirstRead;
    unsigned long long _tagsRead;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)readingAvailable;

- (void)dealloc;
- (void)didTerminate:(id)arg1;
- (void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 updateUICallback:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 invalidateAfterFirstRead:(_Bool)arg3;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (void)restartPolling;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (void)connectToTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_callbackDidInvalidateWithError:(id)arg1;
- (void)_callbackDidBecomeActive;

@end
