/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/Swift-Protocol.h>

@class IMBalloonPluginDataSource, NSString;

@protocol IMPluginChatItemProtocol <Swift>

@property (retain, nonatomic, readonly) NSString *type;
@property (retain, nonatomic, readonly) IMBalloonPluginDataSource *dataSource;
@property (nonatomic, readonly) _Bool isFromMe;

@end
