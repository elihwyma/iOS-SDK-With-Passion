/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSArray, NSString;

@protocol OS_dispatch_queue;

@interface CUBonjourBrowser : NSObject

{
    _Bool _activateCalled;
    _Bool _activated;
    struct BonjourBrowser *_bonjourBrowser;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_deviceMap;
    struct LogCategory *_ucat;
    _Bool _browseFlagsChanged;
    unsigned int _changeFlags;
    unsigned int _controlFlags;
    unsigned long long _browseFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_domain;
    NSString *_interfaceName;
    NSString *_label;
    NSString *_serviceType;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) unsigned long long browseFlags;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int controlFlags;
@property (copy, readonly) NSArray *devices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_update;
- (void)update;
- (void)_invalidated;
- (void)_interrupted;
- (void)activate;
- (id)descriptionWithLevel:(int)arg1;
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;
- (void)_updateLocked;
- (void)_lostAllDevices;
- (int)_bonjourStart;
- (void)_bonjourHandleEventType:(unsigned int)arg1 info:(id)arg2;
- (void)_bonjourHandleAddOrUpdateDevice:(id)arg1;
- (void)_bonjourHandleRemoveDevice:(id)arg1;

@end
