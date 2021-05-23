/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HMFBlockOperation, NSData, NSMutableSet, NSSet;

@interface HAPRelayRequestMessage : HMFObject

{
    NSMutableSet *_requestIdentifiers;
    unsigned short _transactionIdentifier;
    NSData *_body;
    unsigned long long _type;
    double _timeout;
    HMFBlockOperation *_operation;
}

@property (nonatomic) unsigned short transactionIdentifier;
@property (nonatomic, readonly) NSSet *requestIdentifiers;
@property (copy, nonatomic, readonly) NSData *body;
@property (nonatomic, readonly, getter=isEncrypted) _Bool encrypted;
@property (nonatomic, readonly) _Bool sent;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) double timeout;
@property (weak, nonatomic) HMFBlockOperation *operation;

- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithRequestData:(id)arg1 messageType:(unsigned long long)arg2 timeout:(double)arg3;
- (void)addRequestIdentifier:(id)arg1;

@end
