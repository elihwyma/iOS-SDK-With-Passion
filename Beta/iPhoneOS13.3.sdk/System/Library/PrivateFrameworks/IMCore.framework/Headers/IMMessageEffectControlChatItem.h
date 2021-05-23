/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMMessageStatusChatItem.h>

@class NSString;

@interface IMMessageEffectControlChatItem : IMMessageStatusChatItem

{
    NSString *_effectStyleID;
}

@property (copy, nonatomic, readonly) NSString *effectStyleID;

- (id)_initWithItem:(id)arg1 effectStyleID:(id)arg2;

@end
