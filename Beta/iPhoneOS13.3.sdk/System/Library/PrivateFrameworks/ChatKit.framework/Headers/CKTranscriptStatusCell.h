/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString, UIButton;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell

{
    BOOL _buttonAlignmentRelativeToContent;
    UIButton *_statusButton;
    double _prevBalloonWidth;
}

@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (retain, nonatomic) UIButton *statusButton;
@property (nonatomic) BOOL buttonAlignmentRelativeToContent;
@property (nonatomic) double prevBalloonWidth;

+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)statusButton;
+ (void)zoomAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

- (void)prepareForReuse;
- (void)setOrientation:(BOOL)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performInsertion:(CDUnknownBlockType)arg1;

@end
