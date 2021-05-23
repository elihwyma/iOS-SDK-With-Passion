/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem : IMTranscriptChatItem

{
    IMHandle *_handle;
    IMServiceImpl *_service;
}

@property (nonatomic, readonly) IMServiceImpl *service;
@property (nonatomic, readonly) IMHandle *handle;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3;

@end
