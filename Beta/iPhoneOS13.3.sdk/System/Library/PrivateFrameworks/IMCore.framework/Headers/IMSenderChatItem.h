/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMSenderChatItem : IMTranscriptChatItem

{
    IMHandle *_handle;
}

@property (nonatomic, readonly) IMHandle *handle;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 handle:(id)arg2;

@end
