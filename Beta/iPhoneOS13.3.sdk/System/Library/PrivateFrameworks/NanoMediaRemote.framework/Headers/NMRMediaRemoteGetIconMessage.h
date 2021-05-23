/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, _NMRMediaRemoteGetIconMessage;

@interface NMRMediaRemoteGetIconMessage : NSObject

{
    _NMRMediaRemoteGetIconMessage *_protobuf;
}

@property (nonatomic, readonly) NSNumber *width;
@property (nonatomic, readonly) NSNumber *height;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithIconWidth:(double)arg1 height:(double)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4;

- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (id)_initWithIconWidth:(double)arg1 height:(double)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4;

@end
