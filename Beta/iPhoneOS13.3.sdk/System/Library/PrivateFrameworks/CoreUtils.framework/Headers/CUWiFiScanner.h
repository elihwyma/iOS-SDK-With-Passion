/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUWiFiScanner : NSObject

{
    _Bool _activateCalled;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _scanning;
    NSObject<OS_dispatch_source> *_scanTimer;
    _Bool _suspended;
    struct LogCategory *_ucat;
    unsigned int _changeFlags;
    unsigned int _scanFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_ssid;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int scanFlags;
@property (copy, nonatomic) NSString *ssid;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)_cleanup;
- (void)_invalidated;
- (void)activate;
- (void)_scanWiFiStart;
- (void)_scanWiFiFinished:(id)arg1 status:(int)arg2;
- (void)_scanWiFiProcessResult:(id)arg1;

@end
