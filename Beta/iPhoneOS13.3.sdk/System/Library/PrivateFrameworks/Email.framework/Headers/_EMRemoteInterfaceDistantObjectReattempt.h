/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSError, NSInvocation;

__attribute__((visibility("hidden")))
@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject

{
    NSInvocation *_invocation;
    NSError *_error;
}

@property (readonly) NSInvocation *invocation;
@property (readonly) NSError *error;

+ (id)recordedAttemptWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3;

- (id)debugDescription;
- (void)perform;
- (id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3;

@end
