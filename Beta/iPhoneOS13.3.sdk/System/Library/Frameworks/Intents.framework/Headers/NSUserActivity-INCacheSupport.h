/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <CoreServices/NSUserActivity.h>

@class INInteraction, NSString;

@interface NSUserActivity (INCacheSupport)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheIdentifier;
@property (nonatomic, readonly) INInteraction *interaction;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (void)deleteAllInteractions;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1;
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1;

- (void)setInteraction:(id)arg1;
- (long long)_executionContext;
- (_Bool)_hasInteraction;
- (_Bool)_accessedInteraction;
- (void)generateCachePayloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)inInteraction;
- (void)setInInteraction:(id)arg1;
- (void)_setInteraction:(id)arg1 donate:(_Bool)arg2;
- (void)_setExecutionContext:(long long)arg1;
- (void)_setAccessedInteraction:(_Bool)arg1;
- (id)_initWithIntent:(id)arg1;
- (id)_intentsIdentifier;
- (void)_setEligibleForPrediction:(_Bool)arg1;
- (_Bool)_isEligibleForPrediction;
- (id)_intents_copy;

@end
