/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTypingChatItem.h>

@class IMBalloonPluginDataSource, NSData, NSString;

@interface IMTypingPluginChatItem : IMTypingChatItem

{
    NSData *_typingIndicatorIcon;
    IMBalloonPluginDataSource *_dataSource;
}

@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (nonatomic, readonly) NSData *typingIndicatorIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isFromMe;

- (id)_initWithItem:(id)arg1 dataSource:(id)arg2;

@end
