/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSMPConversationKey, NSString;

@interface IDSMPConversationGroupSponsorPair : NSObject

{
    IDSMPConversationKey *_conversationKey;
    NSString *_sponsorAlias;
}

@property (nonatomic, readonly) IDSMPConversationKey *conversationKey;
@property (nonatomic, readonly) NSString *sponsorAlias;

- (id)initWithConversationKey:(id)arg1 sponsorAlias:(id)arg2;

@end
