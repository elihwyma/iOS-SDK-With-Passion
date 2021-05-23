/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPBTLERequest, HAPBTLETransactionIdentifier, NSData, NSMutableData;

@interface HAPBTLEResponse : HMFObject

{
    _Bool _headerComplete;
    unsigned char _statusCode;
    HAPBTLERequest *_request;
    HAPBTLETransactionIdentifier *_identifier;
    NSData *_body;
    unsigned long long _bodyLength;
    NSMutableData *__internalBody;
}

@property (nonatomic, getter=isHeaderComplete) _Bool headerComplete;
@property (copy, nonatomic) NSData *body;
@property (retain, nonatomic, setter=_setInternalBody:) NSMutableData *_internalBody;
@property (nonatomic, readonly) HAPBTLERequest *request;
@property (nonatomic, readonly) HAPBTLETransactionIdentifier *identifier;
@property (nonatomic, readonly, getter=isEncrypted) _Bool encrypted;
@property (nonatomic, readonly, getter=isBodyComplete) _Bool bodyComplete;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) unsigned long long bodyLength;
@property (nonatomic, readonly) unsigned char statusCode;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithRequest:(id)arg1;
- (id)descriptionWithPointer:(_Bool)arg1;
- (unsigned long long)appendData:(id)arg1 error:(id *)arg2;
- (unsigned long long)_deserializeHeaderWithData:(id)arg1 error:(id *)arg2;
- (unsigned long long)_remainingBodyLength;
- (unsigned long long)_deserializeHeaderBodyLengthWithData:(id)arg1 error:(id *)arg2;

@end
