/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSession.h>

@class NSString;

@protocol PKNFCTagReaderSessionDelegate;

@interface PKNFCTagReaderSession : PKPaymentSession

{
    id <PKNFCTagReaderSessionDelegate> _delegate;
}

@property (weak, nonatomic) id <PKNFCTagReaderSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)endSession;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;
- (void)readerSessionDidEndUnexpectedly:(id)arg1;
- (void)startPolling;
- (void)stopPolling;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (void)readNDEFMessageFromTag:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
