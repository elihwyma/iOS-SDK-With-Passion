/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <IMCore/IMChatRegistry.h>

@class NSArray, NSString;

@interface IMChatRegistry (IMAssistantChatDataSource)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *allExistingChats;
@property (nonatomic, readonly) _Bool blackholedChatsExist;

@end
