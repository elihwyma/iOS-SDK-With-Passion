/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload

{
    _Bool _allowAccessWithoutPasscode;
    _Bool _forceAllowSupervisorAccess;
    NSArray *_whitelistedAppsAndOptions;
}

@property (retain, nonatomic) NSArray *whitelistedAppsAndOptions;
@property (nonatomic) _Bool allowAccessWithoutPasscode;
@property (nonatomic) _Bool forceAllowSupervisorAccess;

+ (id)knownOptionsKeys;
+ (id)knownUserEnabledOptionKeys;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;

@end
