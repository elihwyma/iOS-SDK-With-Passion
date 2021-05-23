/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIContentButton, SiriUIKeyline;

@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView

{
    SiriUIKeyline *_verticalKeyline;
    SiriUIKeyline *_horizontalKeyline;
    SiriUIContentButton *_leftButton;
    SiriUIContentButton *_rightButton;
}

@property (nonatomic, readonly) SiriUIContentButton *leftButton;
@property (nonatomic, readonly) SiriUIContentButton *rightButton;

+ (double)defaultHeight;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
