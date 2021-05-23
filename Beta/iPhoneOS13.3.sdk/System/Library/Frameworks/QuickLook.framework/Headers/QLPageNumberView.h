/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIView.h>

@class NSNumberFormatter, UILabel;

__attribute__((visibility("hidden")))
@interface QLPageNumberView : UIView

{
    long long _pageNumber;
    long long _pageCount;
    UILabel *_backgroundLabel;
    UILabel *_label;
    NSNumberFormatter *_indexFormatter;
}

@property long long pageNumber;
@property long long pageCount;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (id)_indexFormatter;
- (void)_updateString;
- (struct CGPath *)_copyMutablePathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2 inverted:(_Bool)arg3;

@end
