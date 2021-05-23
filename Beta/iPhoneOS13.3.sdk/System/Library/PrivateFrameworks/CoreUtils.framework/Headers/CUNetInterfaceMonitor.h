/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface CUNetInterfaceMonitor : NSObject

{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct __SCDynamicStore *_scStore;
    struct LogCategory *_ucat;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _flagsChangedHandler;
    CDUnknownBlockType _primaryIPChangedHandler;
    CDUnknownBlockType _primaryNetworkChangedHandler;
    NSString *_primaryNetworkSignature;
    CDUnion_fab80606 _primaryIPv4Addr;
    CDUnion_fab80606 _primaryIPv6Addr;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, readonly) unsigned int flags;
@property (copy, nonatomic) CDUnknownBlockType flagsChangedHandler;
@property (nonatomic, readonly) CDUnion_fab80606 primaryIPv4Addr;
@property (nonatomic, readonly) CDUnion_fab80606 primaryIPv6Addr;
@property (copy, nonatomic) CDUnknownBlockType primaryIPChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType primaryNetworkChangedHandler;
@property (copy, nonatomic, readonly) NSString *primaryNetworkSignature;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_ensureStarted;
- (void)_ensureStopped;
- (void)_networkInterfacesChanged:(_Bool)arg1;
- (void)_primaryIPChanged:(_Bool)arg1;

@end
