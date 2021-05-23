/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceManager, NSArray, NSString, RBSAssertion, RBSTarget;

@interface BSServiceConnectionEndpointInjector : NSObject

{
    struct os_unfair_lock_s _lock;
    BSServiceManager *_manager;
    RBSTarget *_target;
    NSArray *_additionalAttributes;
    NSString *_domain;
    NSString *_service;
    NSString *_instance;
    NSString *_inheritingEnvironment;
    RBSAssertion *_assertion;
    _Bool _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)injectorWithConfigurator:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)setTarget:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setInstance:(id)arg1;
- (void)setInheritingEnvironment:(id)arg1;
- (void)setAdditionalAttributes:(id)arg1;
- (id)_initWithManager:(id)arg1 configurator:(CDUnknownBlockType)arg2;
- (void)setService:(id)arg1;

@end
