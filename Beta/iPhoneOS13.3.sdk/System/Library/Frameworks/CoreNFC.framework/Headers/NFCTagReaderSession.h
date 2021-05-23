/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCReaderSession.h>

@protocol NFCTag;

@interface NFCTagReaderSession : NFCReaderSession

{
    id <NFCTag> _connectedTag;
    id _swiftDelegateWrapper;
}

@property (retain, nonatomic, readonly) id <NFCTag> connectedTag;

+ (_Bool)readingAvailable;

- (void)dealloc;
- (void)didDetectTags:(id)arg1;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (void)restartPolling;
- (void)connectToTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_callbackDidInvalidateWithError:(id)arg1;
- (void)_callbackDidBecomeActive;
- (id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 delegateType:(long long)arg3 queue:(id)arg4;
- (id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)initWithPollingOption:(long long)arg1 swiftDelegate:(id)arg2 queue:(id)arg3;

@end
