/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSArray, NSDateComponents, NSString;

@interface INTaskList : NSObject <Swift>

{
    INSpeakableString *_title;
    NSArray *_tasks;
    INSpeakableString *_groupName;
    NSDateComponents *_createdDateComponents;
    NSDateComponents *_modifiedDateComponents;
    NSString *_identifier;
}

@property (readonly) long long taskListType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) INSpeakableString *title;
@property (copy, nonatomic, readonly) NSArray *tasks;
@property (copy, nonatomic, readonly) INSpeakableString *groupName;
@property (copy, nonatomic, readonly) NSDateComponents *createdDateComponents;
@property (copy, nonatomic, readonly) NSDateComponents *modifiedDateComponents;
@property (copy, nonatomic, readonly) NSString *identifier;
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
- (id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 taskListType:(long long)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;

@end
