/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Intents/INIntent.h>

@class INPerson, NSArray, NSString;

@interface INIntent (_CDSpotlightRecorderAdditions)

@property (readonly) _Bool cd_saveToKnowledgeStore;
@property (readonly) _Bool cd_saveToPeopleStore;
@property (readonly) NSArray *cd_recipients;
@property (readonly) INPerson *cd_sender;
@property (readonly) long long cd_interactionMechanism;
@property (readonly) NSString *cd_groupName;
@property (copy, readonly) NSString *cd_derivedIntentIdentifier;

@end
