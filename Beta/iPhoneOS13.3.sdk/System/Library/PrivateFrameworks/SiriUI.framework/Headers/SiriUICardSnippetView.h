/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class SiriUISashView;

@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;

@interface SiriUICardSnippetView : UIView

{
    UIView *_cardView;
    SiriUISashView *_sashView;
    id <SiriUICardSnippetViewDataSource> _dataSource;
    id <SiriUICardSnippetViewDelegate> _delegate;
}

@property (weak, nonatomic) id <SiriUICardSnippetViewDataSource> dataSource;
@property (weak, nonatomic) id <SiriUICardSnippetViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setCardView:(id)arg1;
- (void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1;

@end
