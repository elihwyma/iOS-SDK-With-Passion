/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSMutableArray, NSString, UIColor, UILabel;

@interface BFFLinkLabelFooterView : UIView

{
    UILabel *_label;
    UILabel *_subtitleLabel;
    NSMutableArray *_linkHandlers;
    UIView *_topLine;
    _Bool _wantsSideBySideLayout;
    _Bool _wantsFromBottomLayout;
    double _flexibleHeight;
    NSAttributedString *_attributedSubtitleText;
    struct UIEdgeInsets _margins;
}

@property (nonatomic) double flexibleHeight;
@property (nonatomic) struct UIEdgeInsets margins;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSAttributedString *attributedSubtitleText;
@property (nonatomic) _Bool wantsSideBySideLayout;
@property (nonatomic) _Bool wantsFromBottomLayout;
@property (retain, nonatomic) UIColor *topLineColor;

+ (void)initialize;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)removeAllLinks;
- (unsigned long long)numberOfLinks;
- (void)addLinkWithTitle:(id)arg1 textStyle:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)removeLinkAtIndex:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 shouldSetSize:(_Bool)arg2;
- (void)addLinkWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
