//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSDate, NSDictionary, NSString;

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem
{
    struct IMAssociatedMessageGeometryDescriptor _geometryDescriptor;
    BOOL _parentMessageIsFromMe;
    IMHandle *_sender;
}

@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor geometryDescriptor; // @synthesize geometryDescriptor=_geometryDescriptor;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *messageSummaryInfo;
@property(readonly, nonatomic) BOOL failed;
- (void)_setParentMessageIsFromMe:(BOOL)arg1;
@property(readonly, nonatomic) BOOL parentMessageIsFromMe;
@property(readonly, nonatomic) NSRange associatedMessageRange;
@property(readonly, nonatomic) long long associatedMessageType;
@property(readonly, nonatomic) NSString *associatedMessageGUID;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, nonatomic) NSDate *time;
- (id)message;
- (id)_imAssociatedMessageItem;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;

@end

