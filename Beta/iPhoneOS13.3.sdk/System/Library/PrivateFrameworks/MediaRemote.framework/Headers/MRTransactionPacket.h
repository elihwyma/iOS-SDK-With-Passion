/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData, NSString, _MRTransactionKeyProtobuf, _MRTransactionPacketProtobuf;

@interface MRTransactionPacket : NSObject

{
    NSMutableData *_data;
    struct _MRTransactionKeyProtobuf *_key;
    unsigned long long _writeLength;
    unsigned long long _writePosition;
    NSString *_identifier;
    unsigned long long _totalLength;
    unsigned long long _totalWritePosition;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) _MRTransactionKeyProtobuf *key;
@property (nonatomic, readonly) _MRTransactionPacketProtobuf *protobuf;
@property (nonatomic) unsigned long long writeLength;
@property (nonatomic, readonly) unsigned long long writePosition;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long actualLength;
@property (nonatomic, readonly) unsigned long long totalLength;
@property (nonatomic, readonly) unsigned long long totalWritePosition;
@property (nonatomic, readonly, getter=isReadComplete) _Bool readComplete;
@property (nonatomic, readonly, getter=isWriteComplete) _Bool writeComplete;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isComplete;
- (id)initWithData:(id)arg1 forKey:(struct _MRTransactionKeyProtobuf *)arg2;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithPackets:(id)arg1;
- (void)writeComplete;

@end
