/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CUBonjourAdvertiser : NSObject

{
    _Bool _activated;
    struct BonjourAdvertiserPrivate *_bonjourAdvertiser;
    _Bool _invalidateCalled;
    _Bool _started;
    struct LogCategory *_ucat;
    _Bool _updatePending;
    _Bool _advertiseFlagsChanged;
    _Bool _domainChanged;
    _Bool _interfaceIndexChanged;
    _Bool _interfaceNameChanged;
    _Bool _nameChanged;
    _Bool _portChanged;
    _Bool _serviceTypeChanged;
    _Bool _txtDictionaryChanged;
    unsigned int _interfaceIndex;
    int _port;
    unsigned long long _advertiseFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_domain;
    NSString *_interfaceName;
    NSString *_label;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_txtDictionary;
}

@property (nonatomic) unsigned long long advertiseFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned int interfaceIndex;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *txtDictionary;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)activate;
- (id)descriptionWithLevel:(int)arg1;
- (void)_activateLocked;
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;
- (void)_updateLocked;
- (void)_updateTXTDictionary;

@end
