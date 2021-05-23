/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <UIView.h>

__attribute__((visibility("hidden")))
@interface PGChevronView : UIView

{
    long long _state;
    UIView *_topView;
    UIView *_bottomView;
}

@property (nonatomic) long long state;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;

@end
