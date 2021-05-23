/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, _NMROriginProtobuf;

@interface NMROriginInfo : NSObject

{
    _NMROriginProtobuf *_protobuf;
}

@property (nonatomic) int uniqueIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSData *deviceInfoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;

@end
