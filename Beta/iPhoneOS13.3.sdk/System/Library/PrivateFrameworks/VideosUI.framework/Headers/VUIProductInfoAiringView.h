/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class VUILabel, VUIProductInfoAiringLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductInfoAiringView : UIView

{
    VUIProductInfoAiringLayout *_layout;
    VUILabel *_infoLabel;
    _TVImageView *_logo;
}

@property (retain, nonatomic) VUIProductInfoAiringLayout *layout;
@property (retain, nonatomic) VUILabel *infoLabel;
@property (retain, nonatomic) _TVImageView *logo;

+ (id)configureViewWithElement:(id)arg1 existingView:(id)arg2;
+ (id)airingTextWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)_tintColorForDataSource:(id)arg1 interfaceStyle:(long long)arg2;
+ (id)airingLogoWithImageDictionary:(id)arg1 layout:(id)arg2 existingView:(id)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end
