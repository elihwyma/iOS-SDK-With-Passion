/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCReaderSession.h>

@class NFTimer, NSArray;

@interface NFCVASReaderSession : NFCReaderSession

{
    NFTimer *_presenceCheckTimer;
    NSArray *_vasConfig;
}

+ (_Bool)readingAvailable;

- (void)dealloc;
- (void)didTerminate:(id)arg1;
- (void)didDetectTags:(id)arg1;
- (void)beginSession;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (void)_callbackDidInvalidateWithError:(id)arg1;
- (void)_callbackDidBecomeActive;
- (_Bool)_selectOSE;
- (id)_getVASDataWithConfig:(id)arg1 lastInSequence:(_Bool)arg2;
- (id)initWithVASCommandConfigurations:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end
