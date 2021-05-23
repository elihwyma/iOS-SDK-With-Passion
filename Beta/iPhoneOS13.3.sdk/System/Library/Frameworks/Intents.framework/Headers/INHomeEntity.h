/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSArray, NSString;

@interface INHomeEntity : NSObject <Swift>

{
    INSpeakableString *_entityName;
    long long _type;
    NSString *_entityIdentifier;
    NSArray *_deviceTypes;
    long long _sceneType;
    INSpeakableString *_room;
    INSpeakableString *_zone;
    INSpeakableString *_home;
    INSpeakableString *_group;
}

@property (copy, nonatomic, readonly) INSpeakableString *entityName;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *entityIdentifier;
@property (copy, nonatomic, readonly) NSArray *deviceTypes;
@property (nonatomic, readonly) long long sceneType;
@property (copy, nonatomic, readonly) INSpeakableString *room;
@property (copy, nonatomic, readonly) INSpeakableString *zone;
@property (copy, nonatomic, readonly) INSpeakableString *home;
@property (copy, nonatomic, readonly) INSpeakableString *group;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSString *name;
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
- (id)initWithEntityName:(id)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 deviceTypes:(id)arg4 sceneType:(long long)arg5 room:(id)arg6 zone:(id)arg7 home:(id)arg8 group:(id)arg9;
- (id)initWithName:(id)arg1 type:(long long)arg2 deviceType:(long long)arg3;

@end
