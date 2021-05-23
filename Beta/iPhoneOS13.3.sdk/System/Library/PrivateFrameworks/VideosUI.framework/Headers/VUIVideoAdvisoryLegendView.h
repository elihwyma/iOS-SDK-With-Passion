/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSString, VUILabel, VUIVideoAdvisoryViewLayout;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryLegendView : UIView

{
    VUIVideoAdvisoryViewLayout *_layout;
    VUILabel *_legendNameLabel;
    VUILabel *_legendDescriptionLabel;
}

@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout;
@property (retain, nonatomic) VUILabel *legendNameLabel;
@property (retain, nonatomic) VUILabel *legendDescriptionLabel;
@property (copy, nonatomic) NSString *legendName;
@property (copy, nonatomic) NSString *legendDescription;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithLayout:(id)arg1;

@end
