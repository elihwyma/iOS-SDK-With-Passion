/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@class IMChat, NSArray;

@interface IMAssistantRelevantChatMatchingRecipients : NSObject

{
    IMChat *_chat;
    NSArray *_resolvedPersons;
}

@property (retain, nonatomic) IMChat *chat;
@property (copy, nonatomic) NSArray *resolvedPersons;

- (id)description;
- (id)initWithChat:(id)arg1 resolvedPersons:(id)arg2;

@end
