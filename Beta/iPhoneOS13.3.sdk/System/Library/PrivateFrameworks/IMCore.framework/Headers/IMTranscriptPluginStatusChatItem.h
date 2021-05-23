/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMMessageStatusChatItem.h>

@class IMBalloonPluginDataSource;

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem

{
    IMBalloonPluginDataSource *_dataSource;
}

@property (nonatomic, readonly) IMBalloonPluginDataSource *dataSource;

- (id)_initWithItem:(id)arg1 dataSource:(id)arg2;

@end
