/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSArray, NSString;

@interface INHomeFilter : NSObject <Swift>

{
    _Bool _isExcludeFilter;
    NSArray *_entityIdentifiers;
    INSpeakableString *_entityName;
    long long _entityType;
    long long _outerDeviceType;
    INSpeakableString *_outerDeviceName;
    long long _deviceType;
    INSpeakableString *_home;
    INSpeakableString *_zone;
    INSpeakableString *_group;
    INSpeakableString *_room;
}

@property (copy, nonatomic, readonly) NSArray *entityIdentifiers;
@property (copy, nonatomic, readonly) INSpeakableString *entityName;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) long long outerDeviceType;
@property (copy, nonatomic, readonly) INSpeakableString *outerDeviceName;
@property (nonatomic, readonly) long long deviceType;
@property (copy, nonatomic, readonly) INSpeakableString *home;
@property (copy, nonatomic, readonly) INSpeakableString *zone;
@property (copy, nonatomic, readonly) INSpeakableString *group;
@property (copy, nonatomic, readonly) INSpeakableString *room;
@property (nonatomic, readonly) _Bool isExcludeFilter;
@property (copy, nonatomic, readonly) INSpeakableString *scene;
@property (copy, nonatomic, readonly) INSpeakableString *service;
@property (nonatomic, readonly) long long serviceType;
@property (nonatomic, readonly) long long deviceProfileType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 outerDeviceName:(id)arg5 deviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(_Bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11 isExcludeFilter:(_Bool)arg12;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 entityType:(long long)arg8 serviceType:(long long)arg9 subServiceType:(long long)arg10 isExcludeFilter:(_Bool)arg11 entityName:(id)arg12;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 deviceProfileType:(long long)arg4 capabilityName:(id)arg5 capabilityProfileType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(_Bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 innerDeviceName:(id)arg5 innerDeviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(_Bool)arg11;

@end
