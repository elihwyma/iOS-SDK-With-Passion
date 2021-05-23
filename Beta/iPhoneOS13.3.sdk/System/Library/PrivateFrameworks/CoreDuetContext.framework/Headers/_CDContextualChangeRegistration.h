/*
 Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

#import <Foundation/NSObject.h>

@class NSString, _CDContextualPredicate;

@interface _CDContextualChangeRegistration : NSObject

{
    _Bool _mustWake;
    _Bool _isDeserialized;
    unsigned int _qualityOfService;
    NSString *_identifier;
    _CDContextualPredicate *_predicate;
    _CDContextualPredicate *_dismissalPolicy;
    CDUnknownBlockType _callback;
    unsigned long long _deviceSet;
    unsigned long long _deviceTypes;
    NSString *_clientIdentifier;
    NSString *_locationManagerEffectiveBundleID;
    NSString *_locationManagerEffectiveBundlePath;
    CDUnknownBlockType _informativeCallback;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) _CDContextualPredicate *predicate;
@property (retain, nonatomic) _CDContextualPredicate *dismissalPolicy;
@property (nonatomic) unsigned long long deviceSet;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) _Bool mustWake;
@property (nonatomic) _Bool isDeserialized;
@property (copy, nonatomic) NSString *locationManagerEffectiveBundleID;
@property (copy, nonatomic) NSString *locationManagerEffectiveBundlePath;
@property (copy) CDUnknownBlockType informativeCallback;
@property (copy, readonly) CDUnknownBlockType callback;
@property (nonatomic, readonly) unsigned long long deviceTypes;
@property (nonatomic, readonly) unsigned int qualityOfService;

+ (_Bool)supportsSecureCoding;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(_Bool)arg6 qualityOfService:(unsigned int)arg7 callback:(CDUnknownBlockType)arg8;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(_Bool)arg5 qualityOfService:(unsigned int)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(_Bool)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(CDUnknownBlockType)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(_Bool)arg7 qualityOfService:(unsigned int)arg8 informativeCallback:(CDUnknownBlockType)arg9;
- (_Bool)isMultiDeviceRegistration;

@end
