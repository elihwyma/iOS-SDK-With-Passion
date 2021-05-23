/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMAssociatedMessageChatItem.h>

@class IMMessageAcknowledgmentChatItem, NSArray;

@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem

{
    _Bool _latestIsFromMe;
    _Bool _includesMultiple;
    NSArray *_acknowledgments;
    IMMessageAcknowledgmentChatItem *_fromMeAcknowledgement;
    long long _latestAcknowledgmentType;
}

@property (copy, nonatomic, readonly) NSArray *acknowledgments;
@property (nonatomic, readonly) IMMessageAcknowledgmentChatItem *fromMeAcknowledgement;
@property (nonatomic, readonly) _Bool includesFromMe;
@property (nonatomic, readonly) _Bool latestIsFromMe;
@property (nonatomic, readonly) _Bool includesMultiple;
@property (nonatomic, readonly) long long latestAcknowledgmentType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAcknowledgments:(id)arg1;

@end
