/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class ASEventUID, NSDate, NSString;

@interface ASMeetingResponseItem : NSObject

{
    _Bool _responseRequested;
    int _meetingResponse;
    NSString *_deliveryItemFolderId;
    NSString *_deliveryItemServerId;
    ASEventUID *_eventUID;
    NSDate *_instanceDate;
    NSString *_calEventServerId;
    long long _status;
    NSString *_comment;
    NSDate *_proposedStartTime;
    NSDate *_proposedEndTime;
    id _context;
}

@property (retain, nonatomic) NSString *deliveryItemFolderId;
@property (retain, nonatomic) NSString *deliveryItemServerId;
@property (nonatomic) int meetingResponse;
@property (retain, nonatomic) ASEventUID *eventUID;
@property (retain, nonatomic) NSDate *instanceDate;
@property (retain, nonatomic) NSString *calEventServerId;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *comment;
@property (retain, nonatomic) NSDate *proposedStartTime;
@property (retain, nonatomic) NSDate *proposedEndTime;
@property (nonatomic) _Bool responseRequested;
@property (retain, nonatomic) id context;

- (id)description;
- (id)initWithDeliveryItemFolderId:(id)arg1 deliveryItemServerId:(id)arg2 instanceDate:(id)arg3 meetingResponse:(int)arg4 eventUID:(id)arg5 responseComment:(id)arg6 responseRequested:(_Bool)arg7 proposedStartTime:(id)arg8 proposedEndTime:(id)arg9;

@end
