/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface CPEndpointListenerWrapper : NSObject

{
    NSObject<OS_xpc_object> *_endpoint;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithXPCEndpoint:(id)arg1;

@end
