/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPFragmentationPacket : HMFObject

{
    unsigned short _transactionIdentifier;
    unsigned int _length;
    unsigned int _offset;
    NSData *_data;
}

@property (nonatomic, readonly) unsigned short transactionIdentifier;
@property (nonatomic, readonly) unsigned int length;
@property (nonatomic, readonly) unsigned int offset;
@property (copy, nonatomic, readonly) NSData *data;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)serialize;
- (id)shortDescription;
- (id)initWithFragmentedPacketData:(id)arg1;
- (id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned int)arg3 offset:(unsigned int)arg4;

@end
