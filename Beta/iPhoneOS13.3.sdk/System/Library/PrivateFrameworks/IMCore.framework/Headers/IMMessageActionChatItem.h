/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMMessageActionChatItem : IMTranscriptChatItem

{
    IMHandle *_sender;
    IMHandle *_otherHandle;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) IMHandle *otherHandle;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;

@end
