/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MRAVOutputDeviceSourceInfo : NSObject

{
    _Bool _multipleBuiltInDevices;
    NSString *_routingContextUID;
}

@property (nonatomic, readonly) NSString *routingContextUID;
@property (nonatomic, readonly) _Bool multipleBuiltInDevices;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithRoutingContextUID:(id)arg1 multipleBuiltInDevices:(_Bool)arg2;

@end
