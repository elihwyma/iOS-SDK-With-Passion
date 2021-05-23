/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKChatItem.h>

@class IMHandle, NSDate;

@interface CKBalloonChatItem : CKChatItem

@property (nonatomic, readonly) BOOL balloonOrientation;
@property (nonatomic, readonly) unsigned long long balloonCorners;
@property (nonatomic, readonly) BOOL tailShape;
@property (nonatomic, readonly) BOOL balloonShape;
@property (nonatomic, readonly) Class balloonViewClass;
@property (nonatomic, readonly) Class impactBalloonViewClass;
@property (nonatomic, readonly, getter=isFromMe) _Bool fromMe;
@property (nonatomic, readonly) _Bool failed;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) _Bool shouldCacheSize;
@property (nonatomic, readonly) _Bool isBlackholed;

- (id)description;
- (id)contact;
- (struct UIEdgeInsets)contentInsets;
- (_Bool)isEditable;
- (id)cellIdentifier;
- (Class)cellClass;
- (void)configureBalloonView:(id)arg1;
- (struct CKBalloonDescriptor_t)balloonDescriptor;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (_Bool)displayDuringSend;
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;
- (_Bool)wantsDrawerLayout;
- (id)loadTranscriptDrawerText;
- (_Bool)needsPreservedAspectRatio;
- (_Bool)needsAdjustedTextAlignmentInsets;

@end
