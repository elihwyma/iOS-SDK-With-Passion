/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPBTLEControlOutputStream, HAPBTLETransactionIdentifier, HAPCharacteristic, HAPService, HMFBlockOperation, HMFTimer, NSData;

@interface HAPBTLERequest : HMFObject

{
    unsigned char _type;
    _Bool _encrypted;
    _Bool _finished;
    HAPBTLETransactionIdentifier *_identifier;
    HAPService *_service;
    HAPCharacteristic *_characteristic;
    NSData *_body;
    double _timeoutInterval;
    HMFBlockOperation *_operation;
    HAPBTLEControlOutputStream *_controlOutputStream;
    HMFTimer *_responseTimer;
}

@property (nonatomic, readonly) HAPBTLETransactionIdentifier *identifier;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) HAPService *service;
@property (nonatomic, readonly) HAPCharacteristic *characteristic;
@property (nonatomic, readonly, getter=isEncrypted) _Bool encrypted;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (copy, nonatomic, readonly) NSData *body;
@property (nonatomic, readonly) double timeoutInterval;
@property (weak, nonatomic) HMFBlockOperation *operation;
@property (retain, nonatomic) HAPBTLEControlOutputStream *controlOutputStream;
@property (retain, nonatomic) HMFTimer *responseTimer;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)serialize;
- (id)shortDescription;
- (void)cancelWithError:(id)arg1;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(_Bool)arg4 timeoutInterval:(double)arg5;
- (id)_serializeHeader;

@end
