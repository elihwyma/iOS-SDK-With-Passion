/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMItemChatContext.h>

@class IMMessage;

@interface IMMessageItemChatContext : IMItemChatContext

{
    IMMessage *_message;
    _Bool _invitation;
}

- (void)dealloc;

@end
