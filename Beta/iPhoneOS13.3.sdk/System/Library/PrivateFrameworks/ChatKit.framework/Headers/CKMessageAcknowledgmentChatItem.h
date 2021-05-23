/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAssociatedMessageChatItem.h>

@class IMHandle, NSString, UIColor;

@interface CKMessageAcknowledgmentChatItem : CKAssociatedMessageChatItem

{
    long long _messageAcknowledgmentType;
}

@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (nonatomic, readonly) BOOL balloonColorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long messageAcknowledgmentType;
@property (nonatomic, readonly) UIColor *acknowledgmentImageColor;
@property (nonatomic, readonly) NSString *acknowledgmentImageName;
@property (nonatomic, readonly) UIColor *selectedAcknowledgmentImageColor;
@property (nonatomic, readonly) UIColor *selectedBalloonColor;

- (struct UIEdgeInsets)contentInsets;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (struct CKBalloonDescriptor_t)balloonDescriptor;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (_Bool)wantsDrawerLayout;
- (long long)themeColor;
- (id)messageAcknowledgmentChatItem;
- (long long)themeStyle;

@end
