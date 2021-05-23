/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem

{
    IMHandle *_sender;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) IMHandle *sender;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;

@end
