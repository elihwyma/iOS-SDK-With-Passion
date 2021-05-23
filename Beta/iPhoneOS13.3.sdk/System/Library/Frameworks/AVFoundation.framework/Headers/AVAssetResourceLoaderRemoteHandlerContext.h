/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject

{
    NSObject<OS_xpc_object> *_endpoint;
    unsigned long long _customURLHandlerObjectID;
    unsigned long long _authHandlerObjectID;
    unsigned long long _contentKeySessionHandlerObjectID;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *endpoint;
@property (nonatomic, readonly) unsigned long long customURLHandlerObjectID;
@property (nonatomic, readonly) unsigned long long authHandlerObjectID;
@property (nonatomic, readonly) unsigned long long contentKeySessionHandlerObjectID;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1 customURLHandlerObjectID:(unsigned long long)arg2 authHandlerObjectID:(unsigned long long)arg3 contentKeySessionHandlerObjectID:(unsigned long long)arg4;

@end
