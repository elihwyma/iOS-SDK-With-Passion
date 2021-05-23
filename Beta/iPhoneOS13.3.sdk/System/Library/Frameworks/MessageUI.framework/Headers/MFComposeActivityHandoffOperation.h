/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSOperation.h>

@class NSData, NSInputStream, NSObject, NSOutputStream, NSString;

@protocol MFComposeActivityHandoffOperationDelegate, OS_dispatch_queue;

@interface MFComposeActivityHandoffOperation : NSOperation

{
    _Bool _finished;
    _Bool _executing;
    NSObject<OS_dispatch_queue> *_streamHandlerQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSData *_draftData;
    unsigned long long _draftDataByteIndex;
    unsigned long long _draftBytesReceived;
    unsigned long long _draftExpectedSize;
    long long _transmissionType;
    _Bool _doneWithInputStream;
    _Bool _doneWithOutputStream;
    id <MFComposeActivityHandoffOperationDelegate> _delegate;
}

@property (retain, nonatomic) NSData *draftData;
@property (nonatomic, readonly) unsigned long long bytesReceived;
@property (nonatomic, readonly) unsigned long long bytesExpected;
@property (nonatomic) long long transmissionType;
@property (weak, nonatomic) id <MFComposeActivityHandoffOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)receivingOperationWithInputStream:(id)arg1 outputStream:(id)arg2;
+ (id)sendingOperationWithDraftData:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;

- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)_complete;
- (void)_setExecuting:(_Bool)arg1;
- (void)_setFinished:(_Bool)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)_startHandoffStreams;
- (void)_commonHandoffStreamInitializationWithStream:(id)arg1;
- (void)_receivingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_receivingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_handleErrorCode:(unsigned long long)arg1 logString:(id)arg2;
- (void)_didFinishTransferringHandoffPayload;
- (void)_failedToTransferHandoffPayload;
- (void)_checkInHandoffStream:(id)arg1;
- (void)_finishReceivingHandoffDataAndCloseStream;

@end
