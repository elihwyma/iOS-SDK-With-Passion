/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMMessagePartChatItem.h>

@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem

{
    NSString *_transferGUID;
    unsigned int _wantsAttachmentContiguous:1;
    _Bool _parentChatIsSpam;
}

@property (copy, nonatomic, readonly) NSString *transferGUID;
@property (nonatomic, readonly) _Bool parentChatIsSpam;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 transferGUID:(id)arg5 parentChatIsSpam:(_Bool)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 transferGUID:(id)arg5 parentChatIsSpam:(_Bool)arg6 visibleAssociatedMessageChatItems:(id)arg7;
- (_Bool)_wantsAttachmentContiguousForType:(id)arg1;

@end
