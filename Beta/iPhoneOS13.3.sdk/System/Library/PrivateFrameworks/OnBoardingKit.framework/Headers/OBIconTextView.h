/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIView.h>

@class UIImageView, UITextView;

__attribute__((visibility("hidden")))
@interface OBIconTextView : UIView

{
    UIImageView *_iconView;
    UITextView *_textView;
    double _padding;
    double _baselineFromBoundsTop;
    struct CGSize _iconSize;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) struct CGSize iconSize;
@property (retain, nonatomic) UITextView *textView;
@property (nonatomic) double padding;
@property (nonatomic, readonly) double baselineFromBoundsTop;

- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)updateFont;
- (id)initWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 text:(id)arg3 dataDetectorTypes:(unsigned long long)arg4;

@end
