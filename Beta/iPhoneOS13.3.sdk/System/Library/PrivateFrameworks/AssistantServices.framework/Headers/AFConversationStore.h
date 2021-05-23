/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface AFConversationStore : NSObject

{
    NSMutableDictionary *_conversationsByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly, getter=_conversationsByIdentifier) NSMutableDictionary *conversationsByIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)_registerConversation:(id)arg1 withIdentifier:(id)arg2;
- (void)removeConversationWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveConversation:(id)arg1 withIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchConversationWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
