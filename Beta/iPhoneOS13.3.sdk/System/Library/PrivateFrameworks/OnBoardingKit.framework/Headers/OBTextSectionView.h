/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIStackView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface OBTextSectionView : UIStackView

{
    UILabel *_headerLabel;
    UILabel *_contentLabel;
}

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithHeader:(id)arg1 content:(id)arg2;
- (void)addAccessoryButton:(id)arg1;
- (id)_headerFont;
- (id)_contentFont;

@end
