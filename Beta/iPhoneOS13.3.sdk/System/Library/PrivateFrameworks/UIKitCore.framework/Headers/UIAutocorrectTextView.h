/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView

{
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
    _Bool m_animating;
    _Bool m_isLongString;
}

@property (nonatomic) _Bool animating;
@property (nonatomic) _Bool isLongString;

- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)setEdgeType:(int)arg1;
- (struct CGRect)_calculateRectForExpandedHitRegion;
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;

@end
