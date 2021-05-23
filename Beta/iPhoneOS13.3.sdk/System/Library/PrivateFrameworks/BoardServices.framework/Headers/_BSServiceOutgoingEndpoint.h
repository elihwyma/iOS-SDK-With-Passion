/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface _BSServiceOutgoingEndpoint : NSObject

{
    NSObject<OS_xpc_object> *_endpoint;
    NSString *_eDesc;
    unsigned int _invalidationGeneration;
}

+ (id)_wrapXPCEndpoint:(id)arg1 withDescription:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
