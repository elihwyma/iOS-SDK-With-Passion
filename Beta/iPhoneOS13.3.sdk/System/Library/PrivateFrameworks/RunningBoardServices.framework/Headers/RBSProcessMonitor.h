/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSMutableDictionary, NSSet, RBSProcessMonitorConfiguration, RBSProcessPredicate;

@protocol RBSServiceLocalProtocol;

@interface RBSProcessMonitor : NSObject

{
    struct os_unfair_lock_s _lock;
    id <RBSServiceLocalProtocol> _service;
    _Bool _valid;
    _Bool _configuring;
    RBSProcessMonitorConfiguration *_configuration;
    NSMutableDictionary *_stateByIdentity;
}

@property (copy, nonatomic, readonly) RBSProcessPredicate *predicate;
@property (nonatomic, readonly) RBSProcessMonitorConfiguration *configuration;
@property (nonatomic, readonly) unsigned int serviceClass;
@property (copy, nonatomic, readonly) NSSet *states;

+ (id)monitor;
+ (id)monitorWithConfiguration:(CDUnknownBlockType)arg1;
+ (id)monitorWithPredicate:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (_Bool)isValid;
- (void)_reconnect;
- (void)setPredicates:(id)arg1;
- (void)setUpdateHandler:(CDUnknownBlockType)arg1;
- (void)updateConfiguration:(CDUnknownBlockType)arg1;
- (id)_initWithService:(id)arg1;
- (id)predicates;
- (void)setStateDescriptor:(id)arg1;
- (void)setServiceClass:(unsigned int)arg1;
- (id)stateForIdentity:(id)arg1;
- (void)_handleProcessStateChange:(id)arg1;

@end
