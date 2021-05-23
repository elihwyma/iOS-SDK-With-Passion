/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, _NMRMediaRemoteSetIconMessage;

@interface NMRMediaRemoteSetIconMessage : NSObject

{
    _NMRMediaRemoteSetIconMessage *_protobuf;
}

@property (nonatomic, readonly) NSData *icon;
@property (nonatomic, readonly) NSData *originalDigest;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4;

- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (id)_initWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4;

@end
