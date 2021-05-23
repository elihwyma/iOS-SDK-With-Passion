/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class NSString;

@interface IMExpressiveSendAsTextChatItem : IMTranscriptChatItem

{
    NSString *_text;
}

@property (copy, nonatomic, readonly) NSString *text;

- (id)_initWithItem:(id)arg1 text:(id)arg2;

@end
