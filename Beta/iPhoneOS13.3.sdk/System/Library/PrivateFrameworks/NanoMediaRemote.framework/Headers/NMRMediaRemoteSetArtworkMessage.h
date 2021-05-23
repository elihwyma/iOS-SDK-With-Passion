/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, _NMRMediaRemoteSetArtworkMessage;

@interface NMRMediaRemoteSetArtworkMessage : NSObject

{
    _NMRMediaRemoteSetArtworkMessage *_protobuf;
}

@property (nonatomic, readonly) NSData *jpegArtwork;
@property (nonatomic, readonly) NSData *originalDigest;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3;

- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (id)_initWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3;

@end
