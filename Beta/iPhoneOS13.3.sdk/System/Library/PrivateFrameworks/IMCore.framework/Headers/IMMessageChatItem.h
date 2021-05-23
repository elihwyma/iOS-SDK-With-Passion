/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMMessage, NSDate, NSString;

@interface IMMessageChatItem : IMTranscriptChatItem

@property (nonatomic, readonly) IMMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isFromMe;
@property (nonatomic, readonly) _Bool failed;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) IMHandle *sender;

@end
