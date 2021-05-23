/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@class IMAssistantHandleFromContact, IMHandle;

@interface IMAssistantChatParticipant : NSObject

{
    IMHandle *_imHandle;
    IMAssistantHandleFromContact *_handleFromContact;
}

@property (nonatomic, readonly) IMHandle *imHandle;
@property (nonatomic, readonly) IMAssistantHandleFromContact *handleFromContact;

- (id)description;
- (id)initWithIMHandle:(id)arg1 handleFromContact:(id)arg2;

@end
