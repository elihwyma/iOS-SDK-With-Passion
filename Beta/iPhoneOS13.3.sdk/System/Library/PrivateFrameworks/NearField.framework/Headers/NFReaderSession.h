/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

@class NFWeakReference, NSString;

@protocol NFReaderSessionDelegate;

@interface NFReaderSession : NFSession

{
    NFWeakReference *_delegate;
    long long _actionSheetUI;
}

@property id <NFReaderSessionDelegate> delegate;
@property (readonly) long long actionSheetUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)endSession;
- (id)ndefRead;
- (_Bool)checkNdefSupportsRead:(_Bool *)arg1 andWrite:(_Bool *)arg2;
- (_Bool)connectTag:(id)arg1;
- (_Bool)disconnectTag;
- (_Bool)checkPresence;
- (_Bool)startPolling;
- (_Bool)stopPolling;
- (id)transceive:(id)arg1;
- (_Bool)startPollingWithError:(id *)arg1;
- (id)felicaState;
- (_Bool)stopPollingWithError:(id *)arg1;
- (_Bool)connectTag:(id)arg1 error:(id *)arg2;
- (_Bool)checkNdefSupportsRead:(_Bool *)arg1 andWrite:(_Bool *)arg2 error:(id *)arg3;
- (id)ndefReadWithError:(id *)arg1;
- (_Bool)disconnectTagWithError:(id *)arg1;
- (void)didTerminate:(id)arg1;
- (void)didDetectTags:(id)arg1;
- (void)didDetectExternalReaderWithNotification:(id)arg1;
- (void)didEndUnexpectedly;
- (id)initWithUIType:(long long)arg1;
- (_Bool)startPollingForTechnology:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)checkPresenceWithError:(id *)arg1;
- (_Bool)formatNdefWithKey:(id)arg1 error:(id *)arg2;
- (_Bool)ndefWrite:(id)arg1 error:(id *)arg2;
- (id)transceive:(id)arg1 error:(id *)arg2;
- (id)felicaStateWithError:(id *)arg1;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(_Bool)arg4 error:(id *)arg5;
- (_Bool)startPollingForTechnology:(unsigned int)arg1;
- (_Bool)formatNdefWithKey:(id)arg1;
- (_Bool)ndefWrite:(id)arg1;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(_Bool)arg4;
- (unsigned int)runScript:(id)arg1 parameters:(id)arg2 results:(id *)arg3;
- (id)felicaRequestService:(id)arg1 error:(id *)arg2;
- (id)updateUIAlertMessage:(id)arg1;
- (id)skipMifareClassification;

@end
