/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INContactEventTrigger, INSpatialEventTrigger, INSpeakableString, INTemporalEventTrigger, NSDateComponents, NSString;

@interface INTask : NSObject <Swift>

{
    INSpeakableString *_title;
    long long _status;
    INSpatialEventTrigger *_spatialEventTrigger;
    INTemporalEventTrigger *_temporalEventTrigger;
    NSDateComponents *_createdDateComponents;
    NSDateComponents *_modifiedDateComponents;
    NSString *_identifier;
    long long _taskType;
    long long _priority;
    INContactEventTrigger *_contactEventTrigger;
    long long _taskReference;
    NSString *_parentIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) INContactEventTrigger *contactEventTrigger;
@property (nonatomic, readonly) long long taskReference;
@property (copy, nonatomic, readonly) NSString *parentIdentifier;
@property (copy, nonatomic, readonly) INSpeakableString *title;
@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) INSpatialEventTrigger *spatialEventTrigger;
@property (copy, nonatomic, readonly) INTemporalEventTrigger *temporalEventTrigger;
@property (copy, nonatomic, readonly) NSDateComponents *createdDateComponents;
@property (copy, nonatomic, readonly) NSDateComponents *modifiedDateComponents;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long taskType;
@property (nonatomic, readonly) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 priority:(long long)arg9;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 priority:(long long)arg9 contactEventTrigger:(id)arg10 taskReference:(long long)arg11 parentIdentifier:(id)arg12;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 contactEventTrigger:(id)arg9 taskReference:(long long)arg10;

@end
