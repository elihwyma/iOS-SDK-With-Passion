/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INImage, NSDictionary, NSString;

@interface INMediaItem : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_title;
    long long _type;
    INImage *_artwork;
    NSString *_artist;
    NSDictionary *_topics;
    NSDictionary *_namedEntities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) INImage *artwork;
@property (copy, nonatomic, readonly) NSDictionary *topics;
@property (copy, nonatomic, readonly) NSDictionary *namedEntities;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *artist;
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
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)spokenPhrase;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7;

@end
