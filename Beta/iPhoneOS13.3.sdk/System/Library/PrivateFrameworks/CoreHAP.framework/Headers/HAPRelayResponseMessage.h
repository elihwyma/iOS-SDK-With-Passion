/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPRelayRequestMessage, NSData;

@interface HAPRelayResponseMessage : HMFObject

{
    HAPRelayRequestMessage *_request;
    unsigned long long _type;
    long long _statusCode;
    NSData *_body;
}

@property (nonatomic, readonly) HAPRelayRequestMessage *request;
@property (nonatomic, readonly, getter=isEncrypted) _Bool encrypted;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long statusCode;
@property (retain, nonatomic) NSData *body;

- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (_Bool)_deserializeResponseMessage:(id)arg1;
- (id)initWithRequest:(id)arg1 serializedMessage:(id)arg2;

@end
