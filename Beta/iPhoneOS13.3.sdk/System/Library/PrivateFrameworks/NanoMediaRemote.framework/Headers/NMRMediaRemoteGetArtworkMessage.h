/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, _NMRMediaRemoteGetArtworkMessage;

@interface NMRMediaRemoteGetArtworkMessage : NSObject

{
    _NMRMediaRemoteGetArtworkMessage *_protobuf;
}

@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithOriginIdentifier:(id)arg1;

- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (id)_initWithOriginIdentifier:(id)arg1;

@end
