/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl, NSAttributedString, NSDate, NSString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem

{
    long long _statusType;
    NSDate *_time;
    long long _expireStatusType;
    NSDate *_timeAdded;
    NSDate *_timeStale;
    unsigned long long _count;
}

@property (nonatomic, readonly) long long messageStatusType;
@property (nonatomic, readonly) long long statusType;
@property (nonatomic, readonly) _Bool isFromMe;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSString *errorText;
@property (nonatomic, readonly) long long expireStatusType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isFromMe) _Bool fromMe;
@property (nonatomic, readonly) _Bool wantsTail;
@property (copy, nonatomic, readonly) NSAttributedString *transcriptText;
@property (nonatomic, readonly) NSDate *transcriptDate;
@property (nonatomic, readonly) IMServiceImpl *service;
@property (nonatomic, readonly) IMHandle *handle;
@property (nonatomic, readonly) NSDate *dateOfStatus;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5;
- (id)_timeStale;
- (id)_timeAdded;
- (void)_setTimeAdded:(id)arg1;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4;
- (id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3;

@end
