/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKDevice, HKSource, HKSourceRevision, NSDate, NSDictionary, NSString, NSUUID;

@interface HKObject : NSObject <Swift>

{
    NSUUID *_UUID;
    HKSourceRevision *_sourceRevision;
    HKDevice *_device;
    NSDictionary *_metadata;
    long long _provenanceID;
    NSString *_sourceBundleIdentifier;
    double _creationTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier;
@property (copy, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
@property (nonatomic, getter=_creationTimestamp, setter=_setCreationTimestamp:) double creationTimestamp;
@property (copy, nonatomic, readonly, getter=_timeZoneName) NSString *timeZoneName;
@property (readonly) NSUUID *UUID;
@property (readonly) HKSource *source;
@property (readonly) HKSourceRevision *sourceRevision;
@property (readonly) HKDevice *device;
@property (copy, readonly) NSDictionary *metadata;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(CDUnknownBlockType)arg3;
+ (id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)_setUUID:(id)arg1;
- (id)_source;
- (id)_valueDescription;
- (void)_setMetadata:(id)arg1;
- (void)_setDevice:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (long long)_externalSyncObjectCode;
- (_Bool)prepareForSaving:(id *)arg1;
- (id)hk_UUID;
- (void)_validateForCreation;
- (id)_validateConfigurationAllowingPrivateMetadata:(_Bool)arg1 applicationSDKVersion:(unsigned int)arg2;
- (id)_validateConfiguration;
- (id)_copyByArchiving;
- (_Bool)_validateForSavingWithClientEntitlements:(id)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)prepareForDelivery:(id *)arg1;
- (_Bool)_shouldNotifyOnInsert;
- (void)_setSourceRevision:(id)arg1;
- (long long)hk_integerValue;

@end
