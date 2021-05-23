/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMAssociatedMessageChatItem.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessageEditChatItem : IMAssociatedMessageChatItem

{
    NSArray *_visibleAssociatedMessageChatItems;
}

@property (retain, nonatomic, readonly) NSAttributedString *editedBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems;

@end
