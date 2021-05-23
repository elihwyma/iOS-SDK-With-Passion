/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKColoredBalloonView.h>

@class CKMediaObject, NSString, UIImageView, UILabel;

@interface CKContactBalloonView : CKColoredBalloonView

{
    CKMediaObject *_mediaObject;
    UIImageView *_chevron;
    UIImageView *_contactImageView;
    UILabel *_nameLabel;
    UILabel *_organizationLabel;
}

@property (retain, nonatomic) UIImageView *chevron;
@property (retain, nonatomic) UIImageView *contactImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *organizationLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) CKMediaObject *mediaObject;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)prepareForDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (id)_truncateNameIfNeeded:(id)arg1;

@end
