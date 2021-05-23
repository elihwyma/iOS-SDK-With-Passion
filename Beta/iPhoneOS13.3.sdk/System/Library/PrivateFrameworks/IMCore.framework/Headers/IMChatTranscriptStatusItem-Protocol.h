/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/Swift-Protocol.h>

@class NSDate;

@protocol IMChatTranscriptStatusItem <Swift>

@property (nonatomic, readonly) long long statusType;
@property (nonatomic, readonly) long long expireStatusType;
@property (nonatomic, readonly) NSDate *dateOfStatus;

@end
