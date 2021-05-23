/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, NSData, NSObject, NSOperationQueue;

@protocol HAPBTLEControlOutputStreamDelegate, OS_dispatch_queue;

@interface HAPBTLEControlOutputStream : HMFObject

{
    unsigned char _type;
    _Bool _complete;
    _Bool _open;
    id <HAPBTLEControlOutputStreamDelegate> _delegate;
    HAPBTLETransactionIdentifier *_transactionIdentifier;
    NSData *_payload;
    unsigned long long _mtuLength;
    double _timeoutInterval;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _controlPayloadWrittenLength;
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, getter=isComplete) _Bool complete;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, getter=isOpen) _Bool open;
@property (nonatomic) unsigned long long controlPayloadWrittenLength;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (weak) id <HAPBTLEControlOutputStreamDelegate> delegate;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) HAPBTLETransactionIdentifier *transactionIdentifier;
@property (copy, nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly) unsigned long long mtuLength;
@property (nonatomic, readonly) double timeoutInterval;

+ (id)shortDescription;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)open;
- (void)close;
- (id)shortDescription;
- (void)_complete;
- (id)descriptionWithPointer:(_Bool)arg1;
- (void)_closeWithError:(id)arg1;
- (id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 controlPayload:(id)arg3 mtuLength:(unsigned long long)arg4 timeoutInterval:(double)arg5;
- (unsigned long long)remainingControlPayloadLength;
- (void)sendNextPayloadFragment;
- (void)_sendNextPayloadFragmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_nextPacketWithMaximumLength:(unsigned long long)arg1 error:(id *)arg2;

@end
