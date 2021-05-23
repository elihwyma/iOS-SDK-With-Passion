/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, _NMRSendCommandMessageProtobuf;

@interface NMRSendCommandMessage : NSObject

{
    _NMRSendCommandMessageProtobuf *_protobuf;
}

@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithCommand:(unsigned int)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4;

- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (id)initWithCommand:(unsigned int)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4;

@end
