/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class NSString;

@interface IMNumberChangedChatItem : IMTranscriptChatItem

{
    NSString *_sender;
}

@property (nonatomic, readonly) NSString *sender;

- (id)_initWithItem:(id)arg1 senderHandle:(id)arg2;

@end
