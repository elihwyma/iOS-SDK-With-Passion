/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class CSSearchableItem, INImage, INIntent, INIntentResponse, NSDate, NSDateInterval, NSString, NSUUID, SAUISnippet;

@interface INInteraction : NSObject <Swift>

{
    INIntent *_intent;
    INIntentResponse *_intentResponse;
    _Bool _donatedBySiri;
    SAUISnippet *_snippet;
    NSUUID *_contextExtensionUUID;
    long long _intentHandlingStatus;
    long long _direction;
    NSDateInterval *_dateInterval;
    NSString *_identifier;
    NSString *_groupIdentifier;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long intentHandlingStatus;
@property (retain, nonatomic, setter=_setSnippet:) SAUISnippet *_snippet;
@property (nonatomic, setter=_setDonatedBySiri:) _Bool _donatedBySiri;
@property (copy, nonatomic, setter=_setIntent:) INIntent *intent;
@property (copy, nonatomic, setter=_setIntentResponse:) INIntentResponse *intentResponse;
@property (copy, readonly) CSSearchableItem *_searchableItem;
@property (readonly) unsigned long long _indexingHash;
@property (copy, nonatomic, setter=_setContextExtensionUUID:) NSUUID *_contextExtensionUUID;
@property (nonatomic) long long direction;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (unsigned long long)_searchableItemVersion;
+ (void)deleteAllInteractionsWithCompletion:(CDUnknownBlockType)arg1;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (void)_commonInit;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)initWithIntent:(id)arg1 response:(id)arg2;
- (void)donateInteractionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_donateInteractionWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_searchableItemIncludingData:(_Bool)arg1;
- (id)parameterValueForParameter:(id)arg1;
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
