/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord, NSString;

@interface DNDSSettingsRecord : NSObject

{
    DNDSBehaviorSettingsRecord *_behaviorSettings;
    DNDSBypassSettingsRecord *_phoneCallBypassSettings;
    DNDSScheduleSettingsRecord *_scheduleSettings;
}

@property (copy, nonatomic, readonly) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (copy, nonatomic, readonly) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (copy, nonatomic, readonly) DNDSScheduleSettingsRecord *scheduleSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)recordWithEncodedInfo:(id)arg1 error:(id *)arg2;
+ (id)backingStoreWithFileURL:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)_initWithRecord:(id)arg1;
- (id)_initWithBehaviorSettings:(id)arg1 phoneCallBypassSettings:(id)arg2 scheduleSettings:(id)arg3;

@end
