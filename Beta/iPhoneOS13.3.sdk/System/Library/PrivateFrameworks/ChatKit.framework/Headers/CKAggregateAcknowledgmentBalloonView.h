/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAcknowledgmentBalloonView.h>

@class CKGradientView, UIImageView, UIView;

@protocol CKGradientReferenceView;

@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView

{
    CKGradientView *_gradientView;
    UIImageView *_backgroundView;
    UIImageView *_solidPartsView;
    BOOL _gradientColor;
    BOOL _solidColor;
    UIView<CKGradientReferenceView> *_gradientReferenceView;
}

@property (weak, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) BOOL gradientColor;
@property (nonatomic) BOOL solidColor;

+ (id)_middleBubbleSquareImage;
+ (id)_topBubbleSquareImage;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;

@end
