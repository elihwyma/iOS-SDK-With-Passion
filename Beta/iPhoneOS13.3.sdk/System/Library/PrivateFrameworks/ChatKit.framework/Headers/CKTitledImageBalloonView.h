/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKImageBalloonView.h>

@class NSString, UIImageView, UILabel;

@protocol CKTitledImageBalloonViewDelegate;

@interface CKTitledImageBalloonView : CKImageBalloonView

{
    UIImageView *_chevron;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *chevron;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) id <CKTitledImageBalloonViewDelegate> delegate;

- (void)prepareForReuse;
- (void)setOrientation:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tapGestureRecognized:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForLocatingChatItem:(id)arg1;

@end
