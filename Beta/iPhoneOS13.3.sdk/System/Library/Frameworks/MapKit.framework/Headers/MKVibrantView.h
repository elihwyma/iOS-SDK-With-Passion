/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIVisualEffectView.h>

@interface MKVibrantView : UIVisualEffectView

{
    long long _style;
}

@property (nonatomic) long long style;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithEffect:(id)arg1;
- (void)didMoveToWindow;
- (void)setContinuousCornerRadius:(double)arg1;

@end
