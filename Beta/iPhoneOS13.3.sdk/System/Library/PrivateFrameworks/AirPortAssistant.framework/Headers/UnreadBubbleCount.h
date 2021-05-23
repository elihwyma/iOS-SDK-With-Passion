/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <UIKit/UIView.h>

@interface UnreadBubbleCount : UIView

{
    struct CGSize _textSize;
    _Bool _isSelected;
    long long _count;
}

@property (nonatomic) long long count;
@property (nonatomic) _Bool isSelected;

+ (int)initImageCache;
+ (void)deallocImageCache;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)calculateTextMetrics;

@end
