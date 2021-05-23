/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/__HMFLocationManagerOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface __HMFLocationAuthorizationRequest : __HMFLocationManagerOperation

{
    _Bool _requested;
    long long _type;
}

@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithType:(long long)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)initWithType:(long long)arg1 authorization:(id)arg2;
- (id)initWithAuthorization:(id)arg1;

@end
