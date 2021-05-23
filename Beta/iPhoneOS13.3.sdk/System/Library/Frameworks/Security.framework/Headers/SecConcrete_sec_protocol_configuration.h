/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_protocol_configuration : NSObject

{
    NSObject<OS_xpc_object> *dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;

@end
