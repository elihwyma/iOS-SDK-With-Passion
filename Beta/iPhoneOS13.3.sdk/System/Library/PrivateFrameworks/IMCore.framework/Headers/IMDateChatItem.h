/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class NSDate;

@interface IMDateChatItem : IMTranscriptChatItem

@property (nonatomic, readonly) NSDate *date;

- (id)_initWithItem:(id)arg1;
- (id)transcriptDate;

@end
