/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem

{
    IMHandle *_sender;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) IMHandle *sender;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;

@end
