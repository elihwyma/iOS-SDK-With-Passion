/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/Swift-Protocol.h>

@class IMHandle, IMServiceImpl, NSAttributedString, NSDate;

@protocol IMChatTranscriptItem <Swift>

@property (nonatomic, readonly, getter=isFromMe) _Bool fromMe;
@property (nonatomic, readonly) _Bool wantsTail;
@property (copy, nonatomic, readonly) NSAttributedString *transcriptText;
@property (nonatomic, readonly) NSDate *transcriptDate;
@property (nonatomic, readonly) IMServiceImpl *service;
@property (nonatomic, readonly) IMHandle *handle;

@end
