/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMAssociatedMessageChatItem.h>

@class NSString;

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem

{
    NSString *_transferGUID;
}

@property (copy, nonatomic, readonly) NSString *transferGUID;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canDelete;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3;

@end
