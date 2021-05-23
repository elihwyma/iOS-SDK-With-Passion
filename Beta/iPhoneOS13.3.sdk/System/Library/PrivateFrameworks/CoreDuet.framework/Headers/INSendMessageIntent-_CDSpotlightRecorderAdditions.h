/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Intents/INSendMessageIntent.h>

@interface INSendMessageIntent (_CDSpotlightRecorderAdditions)

- (_Bool)cd_saveToPeopleStore;
- (id)cd_derivedIntentIdentifier;
- (long long)cd_interactionMechanism;
- (id)cd_groupName;
- (id)cd_sender;
- (id)cd_recipients;

@end
