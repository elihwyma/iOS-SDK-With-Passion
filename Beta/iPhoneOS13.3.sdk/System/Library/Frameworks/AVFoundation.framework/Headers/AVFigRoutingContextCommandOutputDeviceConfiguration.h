/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject

{
    struct __CFDictionary *_response;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *devicePassword;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSData *devicePublicKey;
@property (nonatomic, readonly) _Bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) _Bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) NSArray *peersInHomeGroup;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)initWithRoutingContextComandResponse:(struct __CFDictionary *)arg1;

@end
