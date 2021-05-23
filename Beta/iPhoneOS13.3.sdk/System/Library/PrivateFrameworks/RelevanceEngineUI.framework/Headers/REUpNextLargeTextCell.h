/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class NSArray, REUpNextImageView, UIFont, UILabel, UILayoutGuide, UIVisualEffectView;

@interface REUpNextLargeTextCell : REUpNextBaseCell

{
    _Bool _showingHeaderImage;
    _Bool _showingBodyImage;
    unsigned int _currentImageEdge;
    UIFont *_standardBodyFont;
    UIFont *_monospaceBodyFont;
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_headerImage;
    REUpNextImageView *_bodyImage;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
    UIVisualEffectView *_headerVisualEffectView;
    UIVisualEffectView *_bodyVisualEffectView;
    UIVisualEffectView *_headerImageVisualEffectView;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_bodyWithLeftImageConstraints;
    NSArray *_bodyWithNoImageConstraints;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)defaultTextColorDidChange;
- (void)_updateHeaderColor;
- (void)configureWithContent:(id)arg1;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end
