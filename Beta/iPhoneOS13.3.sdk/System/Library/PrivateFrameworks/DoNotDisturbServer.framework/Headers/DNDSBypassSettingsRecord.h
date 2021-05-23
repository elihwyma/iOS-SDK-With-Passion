/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface DNDSBypassSettingsRecord : NSObject

{
    NSNumber *_immediateBypassEventSourceType;
    NSString *_immediateBypassCNGroupIdentifier;
    NSNumber *_repeatEventSourceBehaviorEnabledSetting;
}

@property (copy, nonatomic, readonly) NSNumber *immediateBypassEventSourceType;
@property (copy, nonatomic, readonly) NSString *immediateBypassCNGroupIdentifier;
@property (copy, nonatomic, readonly) NSNumber *repeatEventSourceBehaviorEnabledSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)recordForLegacyPrivilegedSenderType:(unsigned long long)arg1 legacyAddressBookID:(int)arg2;
+ (id)_recordWithEncodedInfo:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)_initWithImmediateBypassEventSourceType:(id)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (unsigned long long)legacyPrivilegedSenderType;

@end
