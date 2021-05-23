/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMDevice, HMFUnfairLock, HMHome, NSArray, NSString, NSUUID, _HMContext;

@protocol HMResidentDeviceDelegate;

@interface HMResidentDevice : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _enabled;
    NSUUID *_uniqueIdentifier;
    unsigned long long _status;
    HMHome *_home;
    NSUUID *_accountIdentifier;
    unsigned long long _capabilities;
    id <HMResidentDeviceDelegate> _delegate;
    HMDevice *_device;
    _HMContext *_context;
    NSUUID *_uuid;
}

@property (retain, nonatomic) _HMContext *context;
@property (getter=isEnabled) _Bool enabled;
@property unsigned long long status;
@property unsigned long long capabilities;
@property (weak) HMHome *home;
@property (copy, nonatomic) NSUUID *accountIdentifier;
@property (copy, nonatomic, readonly) NSUUID *uuid;
@property (weak) id <HMResidentDeviceDelegate> delegate;
@property (copy, readonly) NSUUID *uniqueIdentifier;
@property (readonly) HMDevice *device;
@property (copy, readonly) NSString *name;
@property (readonly, getter=isCurrentDevice) _Bool currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)updatedEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRuntimeStateUpdate:(id)arg1;

@end
