/*
 Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport
 */

#import <SearchFoundation/SFCard.h>

@class INInteraction;

@interface SFCard (AssistantCardService)

@property (retain, nonatomic, setter=acs_setInteraction:) INInteraction *acs_interaction;

+ (id)acs_uniquelyIdentifiedCard;

@end
