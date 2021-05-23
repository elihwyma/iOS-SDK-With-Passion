/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMChat, IMChatItem, NSArray, NSMutableArray, NSString;

@interface IMTranscriptChatItemRules : NSObject

{
    IMChat *_chat;
    NSArray *_items;
    NSMutableArray *_chatItems;
    IMChatItem *_nextStaleChatItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)testShouldShowReportSpamForChat:(id)arg1 items:(id)arg2;
+ (_Bool)testShouldShowSMSSpamForChat:(id)arg1 items:(id)arg2;
+ (_Bool)testShouldAppendNumberChanged:(id)arg1 previousItem:(id)arg2 showAllChanges:(_Bool)arg3;

- (id)_items;
- (void)_setItems:(id)arg1;
- (_Bool)shouldShowRaiseMessageStatus;
- (id)_chatItems;
- (id)_initWithChat:(id)arg1;
- (void)_didProcessChatItems:(id)arg1;
- (_Bool)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (id)_nextStaleChatItem;
- (void)_setNextStaleChatItem:(id)arg1;
- (id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (id)testChatItems;
- (id)chatItemForIMChatItem:(id)arg1;
- (_Bool)shouldShowExpressiveMessageTextAsText:(id)arg1;
- (_Bool)_shouldShowEffectPlayButtonForMessage:(id)arg1;
- (void)_processChatItemsForBreadcrumbs:(id)arg1;
- (_Bool)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
- (void)_processChatItemsForReplayButton:(id)arg1;
- (void)_processChatItemsForAttribution:(id)arg1;
- (_Bool)_shouldDisplayAttributionInfo:(id)arg1;
- (id)_effectControlForChatItem:(id)arg1;
- (id)_attributionChatItemForChatItem:(id)arg1;
- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (_Bool)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;

@end
