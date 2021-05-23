/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseTemplateView.h>

@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView

{
    id _textBalloonView;
}

@property (weak, nonatomic) id <SiriUIMessageContentTemplateModel> dataSource;

- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setSemanticContentAttribute:(long long)arg1;
- (double)desiredHeight;
- (struct CGSize)_textBalloonViewBoundingSize;

@end
