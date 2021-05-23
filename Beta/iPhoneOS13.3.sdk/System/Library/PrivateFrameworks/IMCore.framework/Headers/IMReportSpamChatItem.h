/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@interface IMReportSpamChatItem : IMTranscriptChatItem

{
    _Bool _wasReportedAsSpam;
    _Bool _isGroupMessage;
    _Bool _hasMultipleMessages;
    _Bool _showReportSMSSpam;
}

@property (nonatomic, readonly) _Bool wasReportedAsSpam;
@property (nonatomic, readonly) _Bool isGroupMessage;
@property (nonatomic, readonly) _Bool hasMultipleMessages;
@property (nonatomic, readonly) _Bool showReportSMSSpam;

- (id)_initWithItem:(id)arg1 wasReportedAsSpam:(_Bool)arg2 isGroup:(_Bool)arg3 hasMultipleMessages:(_Bool)arg4 showReportSMSSpam:(_Bool)arg5;

@end
