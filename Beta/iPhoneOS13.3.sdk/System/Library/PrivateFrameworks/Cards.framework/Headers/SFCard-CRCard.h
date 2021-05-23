/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <SFCard.h>

@class NSArray, NSSet, NSString;

@interface SFCard (CRCard)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *cardSections;
@property (nonatomic, readonly) NSSet *interactions;
@property (nonatomic, readonly) NSArray *dismissalCommands;
@property (copy, nonatomic, readonly) NSString *cardIdentifier;
@property (nonatomic, readonly) unsigned long long cardFormat;
@property (nonatomic, readonly) _Bool asynchronous;
@property (nonatomic, readonly) _Bool flexibleSectionOrder;
@property (nonatomic, readonly) SFCard *backingCard;

+ (id)_interactionsByIntentDataHashes;

- (id)interaction;
- (id)underlyingInteraction;
- (void)loadCardWithCompletion:(CDUnknownBlockType)arg1;
- (id)_interactionDataKey;

@end
