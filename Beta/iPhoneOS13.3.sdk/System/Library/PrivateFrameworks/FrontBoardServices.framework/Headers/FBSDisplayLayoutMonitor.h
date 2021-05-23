/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, FBSDisplayLayout, NSMapTable, NSString, _FBSDisplayLayoutServiceAssertion;

@interface FBSDisplayLayoutMonitor : NSObject

{
    struct os_unfair_lock_s _lock;
    _FBSDisplayLayoutServiceAssertion *_lock_handlerAssertion;
    _Bool _lock_invalidated;
    BSServiceConnectionEndpoint *_deprecated_endpoint;
    CDUnknownBlockType _lock_deprecated_handler;
    NSMapTable *_lock_deprecated_observerAssertions;
    BOOL _deprecated_qos;
    long long _deprecated_displayType;
    _Bool _deprecated_singleton;
    _Bool _deprecated_mutable;
}

@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)interface;
+ (id)monitorWithConfiguration:(id)arg1;
+ (id)sharedMonitorForDisplayType:(long long)arg1;
+ (id)serviceIdentifier;
+ (id)_endpointForDisplayType:(long long)arg1;
+ (id)mainDisplayInstanceIdentifier;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (CDUnknownBlockType)handler;
- (void)setHandler:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1;
- (unsigned long long)qualityOfService;
- (void)removeObserver:(id)arg1;
- (id)initWithDisplayType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (long long)displayType;
- (id)initWithDisplayType:(long long)arg1;
- (id)_initWithConfiguration:(id)arg1 singleton:(_Bool)arg2 needsDefaultPriority:(_Bool)arg3 mutable:(_Bool)arg4 displayType:(long long)arg5 mutableHandler:(CDUnknownBlockType)arg6;
- (id)initWithDisplayType:(long long)arg1 qualityOfService:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
