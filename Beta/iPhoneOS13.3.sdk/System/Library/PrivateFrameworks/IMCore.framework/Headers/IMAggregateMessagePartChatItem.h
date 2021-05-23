/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTextMessagePartChatItem.h>

@class NSArray;

@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem

{
    NSArray *_subparts;
}

@property (copy, nonatomic, readonly) NSArray *subparts;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 messagePartRange:(struct _NSRange)arg2 subparts:(id)arg3;

@end
