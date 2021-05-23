/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMMessagePartChatItem.h>

@class NSAttributedString;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem

{
    NSAttributedString *_subject;
}

@property (copy, nonatomic, readonly) NSAttributedString *subject;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5;
- (_Bool)shouldDisplayRichLink;
- (void)setShouldDisplayRichLink:(_Bool)arg1;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5 shouldDisplayLink:(_Bool)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6;

@end
