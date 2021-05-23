/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class EAAccessoryManager, NSString;

@protocol OS_dispatch_queue;

@interface CUMFiDeviceDiscovery : NSObject

{
    EAAccessoryManager *_eaManager;
    struct LogCategory *_ucat;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (void)_eaAccessoryDidConnect:(id)arg1;
- (void)_eaAccessoryDidDisconnect:(id)arg1;

@end
