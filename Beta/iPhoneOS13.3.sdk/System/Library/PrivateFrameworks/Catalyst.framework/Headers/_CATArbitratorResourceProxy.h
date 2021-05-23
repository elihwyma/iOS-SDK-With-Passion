/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSProxy.h>

@class NSString, _CATArbitratorRegistrationEntry;

__attribute__((visibility("hidden")))
@interface _CATArbitratorResourceProxy : NSProxy

{
    id mResource;
    _CATArbitratorRegistrationEntry *mRegistration;
    _Bool _isExclusive;
}

@property (nonatomic, readonly) _Bool isExclusive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)invalidate;
- (id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(_Bool)arg3;

@end
