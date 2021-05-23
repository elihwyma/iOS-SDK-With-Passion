/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMMessagePartChatItem.h>

@class IMBalloonPluginDataSource, IMPluginPayload, NSString;

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem

{
    _Bool _isLastChatItemOfPluginType;
    _Bool _hasSetIsLastChatItemOfPluginType;
    _Bool _parentChatHasKnownParticipants;
    IMPluginPayload *_initialPayload;
    NSString *_bundleIdentifier;
    IMBalloonPluginDataSource *_dataSource;
}

@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (retain, nonatomic) IMPluginPayload *initialPayload;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) _Bool hasSetIsLastChatItemOfPluginType;
@property (nonatomic, readonly) _Bool isDataSourceInitialized;
@property (nonatomic, readonly) NSString *pluginSessionGUID;
@property (nonatomic, readonly) unsigned long long playbackType;
@property (nonatomic, setter=setLastChatItemOfPluginType:) _Bool isLastChatItemOfPluginType;
@property (nonatomic, readonly) _Bool parentChatHasKnownParticipants;
@property (nonatomic, readonly) _Bool isPlayed;
@property (nonatomic, readonly) _Bool isSaved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isFromMe;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)wantsAutoPlayback;
- (id)_initWithItem:(id)arg1 initialPayload:(id)arg2 messagePartRange:(struct _NSRange)arg3 parentChatHasKnownParticipants:(_Bool)arg4;

@end
