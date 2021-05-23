/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CNContact, IMTranscriptChatItem, NSAttributedString, NSString, UITraitCollection, UNNotification;

@interface CKChatItem : NSObject

{
    _Bool _zOrder;
    _Bool _sizeLoaded;
    IMTranscriptChatItem *_imChatItem;
    UNNotification *_notification;
    double _maxWidth;
    UITraitCollection *_transcriptTraitCollection;
    NSAttributedString *_transcriptText;
    NSAttributedString *_transcriptDrawerText;
    struct CGSize _size;
    struct UIEdgeInsets _textAlignmentInsets;
}

@property (retain, nonatomic) IMTranscriptChatItem *IMChatItem;
@property (retain, nonatomic) UITraitCollection *transcriptTraitCollection;
@property (retain, nonatomic) UNNotification *notification;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSAttributedString *transcriptText;
@property (copy, nonatomic) NSAttributedString *transcriptDrawerText;
@property (nonatomic, getter=isSizeLoaded) _Bool sizeLoaded;
@property (nonatomic, readonly) unsigned char contiguousType;
@property (nonatomic, readonly) unsigned char attachmentContiguousType;
@property (nonatomic, readonly) _Bool hasTail;
@property (nonatomic, readonly) _Bool zOrder;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct UIEdgeInsets textAlignmentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets transcriptTextAlignmentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) BOOL transcriptOrientation;
@property (nonatomic, readonly) Class cellClass;
@property (copy, nonatomic, readonly) NSString *cellIdentifier;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) _Bool displayDuringSend;
@property (nonatomic, readonly) _Bool wantsDrawerLayout;
@property (nonatomic, readonly) _Bool isEditable;
@property (nonatomic, readonly) _Bool canCopy;
@property (nonatomic, readonly) _Bool canDelete;
@property (nonatomic, readonly) _Bool canForward;
@property (nonatomic, readonly) _Bool canExport;
@property (nonatomic, readonly) _Bool canSendAsTextMessage;
@property (copy, nonatomic, readonly) NSString *menuTitle;
@property (nonatomic, readonly) _Bool canAttachStickers;
@property (nonatomic, readonly) _Bool stickersSnapToPoint;
@property (nonatomic, readonly) struct CKBalloonDescriptor_t balloonDescriptor;

+ (id)chatItemWithIMChatItem:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3 transcriptTraitCollection:(id)arg4;
+ (id)chatItemWithNotification:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)visibleAssociatedMessageChatItems;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (void)unloadTranscriptText;
- (void)unloadSize;
- (id)loadTranscriptDrawerText;
- (_Bool)canSave;
- (id)initWithNotification:(id)arg1 maxWidth:(double)arg2;
- (void)_setSizeForTesting:(struct CGSize)arg1;

@end
