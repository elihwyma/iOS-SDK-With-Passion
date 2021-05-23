/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INImage, INSpeakableString, NSArray, NSString;

@interface INShortcutOverview : NSObject <Swift>

{
    INSpeakableString *_name;
    INSpeakableString *_voiceCommand;
    INImage *_icon;
    INSpeakableString *_descriptiveText;
    NSArray *_steps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) INSpeakableString *name;
@property (copy, nonatomic, readonly) INSpeakableString *voiceCommand;
@property (copy, nonatomic, readonly) INImage *icon;
@property (copy, nonatomic, readonly) INSpeakableString *descriptiveText;
@property (copy, nonatomic, readonly) NSArray *steps;
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
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 voiceCommand:(id)arg2 icon:(id)arg3 descriptiveText:(id)arg4 steps:(id)arg5;

@end
