/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, NSData;

@interface HAPBTLEControlPacket : HMFObject

{
    unsigned char _type;
    _Bool _continuationPacket;
    HAPBTLETransactionIdentifier *_transactionIdentifier;
    NSData *_payload;
}

@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) HAPBTLETransactionIdentifier *transactionIdentifier;
@property (copy, nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly, getter=isContinuationPacket) _Bool continuationPacket;

+ (id)shortDescription;
+ (id)packetWithSerializedData:(id)arg1 error:(id *)arg2;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)serialize;
- (id)shortDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 continuationPacket:(_Bool)arg3 packetPayload:(id)arg4 maximumLength:(unsigned long long)arg5;

@end
