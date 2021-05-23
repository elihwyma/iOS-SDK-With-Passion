/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString, _NMRCloudAvailabilityProtobuf;

@interface NMRCloudAvailabilityMessage : NSObject

{
    _NMRCloudAvailabilityProtobuf *_protobuf;
}

@property (nonatomic) _Bool hasProperNetworkConditionsToPlayMedia;
@property (nonatomic) _Bool canShowCloudMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;

@end
