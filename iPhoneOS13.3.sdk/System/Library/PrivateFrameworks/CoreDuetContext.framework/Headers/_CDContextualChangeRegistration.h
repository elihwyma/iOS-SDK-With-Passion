//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, _CDContextualPredicate;

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _mustWake;
    BOOL _isDeserialized;
    unsigned int _qualityOfService;
    NSString *_identifier;
    _CDContextualPredicate *_predicate;
    _CDContextualPredicate *_dismissalPolicy;
    id /* CDUnknownBlockType */ _callback;
    NSUInteger _deviceSet;
    NSUInteger _deviceTypes;
    NSString *_clientIdentifier;
    NSString *_locationManagerEffectiveBundleID;
    NSString *_locationManagerEffectiveBundlePath;
    id /* CDUnknownBlockType */ _informativeCallback;
}

+ (BOOL)supportsSecureCoding;
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(id /* CDUnknownBlockType */)arg4;
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(id /* CDUnknownBlockType */)arg3;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(id /* CDUnknownBlockType */)arg4;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(id /* CDUnknownBlockType */)arg3;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(NSUInteger)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 qualityOfService:(unsigned int)arg6 callback:(id /* CDUnknownBlockType */)arg7;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(NSUInteger)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 callback:(id /* CDUnknownBlockType */)arg6;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(NSUInteger)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 qualityOfService:(unsigned int)arg7 callback:(id /* CDUnknownBlockType */)arg8;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(NSUInteger)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 callback:(id /* CDUnknownBlockType */)arg7;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(NSUInteger)arg4 mustWake:(BOOL)arg5 callback:(id /* CDUnknownBlockType */)arg6;
@property(copy) id /* CDUnknownBlockType */ informativeCallback; // @synthesize informativeCallback=_informativeCallback;
@property(copy, nonatomic) NSString *locationManagerEffectiveBundlePath; // @synthesize locationManagerEffectiveBundlePath=_locationManagerEffectiveBundlePath;
@property(copy, nonatomic) NSString *locationManagerEffectiveBundleID; // @synthesize locationManagerEffectiveBundleID=_locationManagerEffectiveBundleID;
@property(nonatomic) BOOL isDeserialized; // @synthesize isDeserialized=_isDeserialized;
@property(readonly, nonatomic) unsigned int qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) BOOL mustWake; // @synthesize mustWake=_mustWake;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) NSUInteger deviceTypes; // @synthesize deviceTypes=_deviceTypes;
@property(nonatomic) NSUInteger deviceSet; // @synthesize deviceSet=_deviceSet;
@property(readonly, copy) id /* CDUnknownBlockType */ callback; // @synthesize callback=_callback;
@property(retain, nonatomic) _CDContextualPredicate *dismissalPolicy; // @synthesize dismissalPolicy=_dismissalPolicy;
@property(retain, nonatomic) _CDContextualPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isMultiDeviceRegistration;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(NSUInteger)arg4 deviceTypes:(NSUInteger)arg5 clientIdentifier:(id)arg6 mustWake:(BOOL)arg7 qualityOfService:(unsigned int)arg8 informativeCallback:(id /* CDUnknownBlockType */)arg9;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(NSUInteger)arg4 deviceTypes:(NSUInteger)arg5 clientIdentifier:(id)arg6 mustWake:(BOOL)arg7 callback:(id /* CDUnknownBlockType */)arg8;
- (id)init;

@end

