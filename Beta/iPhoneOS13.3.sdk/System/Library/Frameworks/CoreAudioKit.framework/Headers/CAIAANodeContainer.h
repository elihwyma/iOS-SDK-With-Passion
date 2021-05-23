/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UIScrollView.h>

__attribute__((visibility("hidden")))
@interface CAIAANodeContainer : UIScrollView

{
    long long _numPages;
}

@property long long numPages;

+ (void)initialize;

- (double)minWidth;
- (double)contentWidth;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
