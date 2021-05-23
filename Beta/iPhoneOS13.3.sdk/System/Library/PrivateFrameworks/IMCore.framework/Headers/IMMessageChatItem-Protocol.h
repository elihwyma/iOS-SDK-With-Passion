/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/Swift-Protocol.h>

@class IMHandle, NSDate;

@protocol IMMessageChatItem <Swift>

@property (nonatomic, readonly) _Bool isFromMe;
@property (nonatomic, readonly) _Bool failed;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) IMHandle *sender;

@end
