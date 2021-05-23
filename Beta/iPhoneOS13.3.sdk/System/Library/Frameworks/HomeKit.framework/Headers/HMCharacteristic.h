/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMCharacteristicMetadata, HMFUnfairLock, HMService, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSUUID, _HMContext;

@interface HMCharacteristic : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _notificationEnabled;
    _Bool _requiresDeviceUnlock;
    _Bool _hasAuthorizationData;
    _Bool _notificationEnabledByThisClient;
    NSUUID *_uniqueIdentifier;
    NSString *_characteristicType;
    NSArray *_properties;
    id _value;
    NSDate *_valueUpdatedTime;
    NSDate *_notificationEnabledTime;
    HMService *_service;
    HMCharacteristicMetadata *_metadata;
    _HMContext *_context;
    NSNumber *_instanceID;
}

@property (copy, readonly) NSDictionary *serializedDictionaryRepresentation;
@property (retain, nonatomic) _HMContext *context;
@property (nonatomic, readonly) NSNumber *instanceID;
@property (weak, nonatomic) HMService *service;
@property (copy, nonatomic) NSString *characteristicType;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) _Bool requiresDeviceUnlock;
@property (copy, nonatomic) id value;
@property (nonatomic) _Bool notificationEnabledByThisClient;
@property (nonatomic, getter=isNotificationEnabled) _Bool notificationEnabled;
@property (copy, nonatomic) NSDate *valueUpdatedTime;
@property (copy, nonatomic) NSDate *notificationEnabledTime;
@property _Bool hasAuthorizationData;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) HMCharacteristicMetadata *metadata;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)_characteristicTypeAsString:(id)arg1;
+ (id)__localizedDescriptionForCharacteristicType:(id)arg1;
+ (id)localizedDescriptionForCharacteristicType:(id)arg1;
+ (id)characteristicWithCharacteristicReference:(id)arg1 home:(id)arg2;
+ (id)characteristicWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)mapHAPProperties:(long long)arg1;
- (void)_writeValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_readValueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_enableNotification:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAuthorizationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__configureWithContext:(id)arg1 service:(id)arg2;
- (void)setValueUpdateTime:(id)arg1;
- (void)_updateValue:(id)arg1 updateTime:(id)arg2;
- (void)writeValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readValueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableNotification:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAuthorizationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_characteristicTypeDescription;

@end
