/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMBalloonPluginDataSource, NSString;

@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem

{
    IMBalloonPluginDataSource *_dataSource;
    NSString *_rawStatusText;
    NSString *_statusText;
    unsigned long long _optionFlags;
}

@property (nonatomic, readonly) NSString *rawStatusText;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (nonatomic, readonly) NSString *statusText;
@property (nonatomic, readonly) unsigned long long optionFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isFromMe;

- (_Bool)isEqual:(id)arg1;
- (id)_initWithItem:(id)arg1 datasource:(id)arg2 statusText:(id)arg3 optionFlags:(unsigned long long)arg4;
- (void)configureStatusTextWithAccount:(id)arg1;

@end
