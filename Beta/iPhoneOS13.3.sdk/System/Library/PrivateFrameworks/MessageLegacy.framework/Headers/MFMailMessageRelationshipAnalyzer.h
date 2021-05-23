/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MFMailMessageRelationshipAnalyzer : NSObject

{
    NSArray *_messages;
    NSArray *_relationships;
}

+ (id)myEmailAddresses;
+ (id)analyzeMessages:(id)arg1 myEmailAddresses:(id)arg2;
+ (id)sendersOfMessage:(id)arg1;
+ (unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4;
+ (_Bool)isMessage:(id)arg1 responseToMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4;
+ (_Bool)isMessageDraft:(id)arg1;
+ (_Bool)isMessage:(id)arg1 forwardOfMessage:(id)arg2 myEmailAddresses:(id)arg3;
+ (_Bool)isMessage:(id)arg1 sentByAddress:(id)arg2;
+ (_Bool)isMessage:(id)arg1 addressedToPreviousSender:(id)arg2;
+ (_Bool)isMessage:(id)arg1 addressedToMailingListForMessage:(id)arg2;
+ (id)recipientsOfMessage:(id)arg1;
+ (id)analysisOfConversation:(id)arg1;
+ (unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2;

- (void)dealloc;
- (id)initWithMessages:(id)arg1 relationships:(id)arg2;
- (unsigned long long)relationOfMessage:(id)arg1;

@end
