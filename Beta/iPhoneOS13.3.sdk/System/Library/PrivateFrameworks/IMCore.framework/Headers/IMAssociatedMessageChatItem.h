/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSDate, NSDictionary, NSString;

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem

{
    struct IMAssociatedMessageGeometryDescriptor _geometryDescriptor;
    _Bool _parentMessageIsFromMe;
    IMHandle *_sender;
}

@property (nonatomic, readonly) _Bool isFromMe;
@property (nonatomic, readonly) _Bool parentMessageIsFromMe;
@property (nonatomic, readonly) _Bool failed;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) struct _NSRange associatedMessageRange;
@property (nonatomic, readonly) struct IMAssociatedMessageGeometryDescriptor geometryDescriptor;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) NSDictionary *messageSummaryInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)message;
- (void)_setParentMessageIsFromMe:(_Bool)arg1;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (id)_imAssociatedMessageItem;

@end
