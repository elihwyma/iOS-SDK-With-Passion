/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUILabelComponentView.h>

@class UILabel;

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView

{
    UILabel *_mainLabel;
    UILabel *_detailLabel;
}

@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *detailLabel;

+ (id)viewForComponent:(id)arg1;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)addSubviewsForComponentModel:(id)arg1;

@end
