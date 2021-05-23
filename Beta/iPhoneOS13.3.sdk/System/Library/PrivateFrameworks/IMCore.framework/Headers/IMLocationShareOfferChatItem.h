/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSDate, NSString;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem

{
    IMHandle *_sender;
    _Bool _actionableEclipsed;
}

@property (nonatomic, readonly) long long offerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isFromMe;
@property (nonatomic, readonly) _Bool failed;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) IMHandle *sender;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (void)_setActionableEclipsed:(_Bool)arg1;
- (_Bool)_isActionableEclipsed;

@end
