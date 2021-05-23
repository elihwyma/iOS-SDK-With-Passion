/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

#import <Engram/Swift-Protocol.h>

@class NSData;

@protocol ENCypher, ENDevicePublicKey;

@interface ENParticipantDevice : NSObject <Swift>

{
    id <ENDevicePublicKey> _devicePublicKey;
    NSData *_identifier;
    id <ENCypher> _cypher;
}

@property (retain, nonatomic) id <ENCypher> cypher;
@property (nonatomic, readonly) id <ENDevicePublicKey> devicePublicKey;
@property (nonatomic, readonly) NSData *identifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)verifyAndRevealData:(id)arg1 withReceipient:(id)arg2 cypherIdentifier:(id)arg3 error:(id *)arg4;
- (id)initWithDevicePublicKey:(id)arg1 cypher:(id)arg2 identifier:(id)arg3;
- (id)signAndConcealData:(id)arg1 withSender:(id)arg2 cypherIdentifier:(id *)arg3 error:(id *)arg4;

@end
