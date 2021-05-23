/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKHyperlinkBalloonView.h>

@class NSString, UIImageView;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView

{
    _Bool _avoidTextLineBreaks;
    UIImageView *_chevron;
}

@property (retain, nonatomic) UIImageView *chevron;
@property (nonatomic) _Bool avoidTextLineBreaks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)configureForMessagePart:(id)arg1;

@end
