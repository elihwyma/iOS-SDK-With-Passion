/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootClientServiceContext : BSXPCServiceConnectionRootContext

{
    _Bool _privileged;
}

@property (copy, nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly, getter=isPrivileged) _Bool privileged;

+ (id)uniqueClientContextWithServiceName:(id)arg1 privileged:(_Bool)arg2;

- (_Bool)isClient;
- (id)_initWithService:(id)arg1 privileged:(_Bool)arg2;

@end
