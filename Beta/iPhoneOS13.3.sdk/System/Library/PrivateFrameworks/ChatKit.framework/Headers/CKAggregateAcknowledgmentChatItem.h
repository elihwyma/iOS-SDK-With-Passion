/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAssociatedMessageChatItem.h>

@class NSArray, NSString, UIColor;

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem

{
    long long _latestAcknowledgmentType;
}

@property (copy, nonatomic, readonly) NSArray *acknowledgments;
@property (nonatomic, readonly) long long latestAcknowledgmentType;
@property (nonatomic, readonly) _Bool includesFromMe;
@property (nonatomic, readonly) _Bool latestIsFromMe;
@property (nonatomic, readonly) _Bool includesMultiple;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (copy, readonly) NSString *acknowledgmentImageName;
@property (readonly) UIColor *acknowledgmentImageColor;
@property (readonly) Class balloonViewClass;

- (_Bool)isEqual:(id)arg1;
- (struct UIEdgeInsets)contentInsets;
- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)associatedChatItemGUID;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (id)_imAggregateAcknowledgmentChatItem;

@end
