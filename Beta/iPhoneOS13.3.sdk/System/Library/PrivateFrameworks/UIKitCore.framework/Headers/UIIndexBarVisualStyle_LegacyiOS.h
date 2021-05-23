/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIIndexBarVisualStyle_Base.h>

@class NSArray, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UIIndexBarVisualStyle_LegacyiOS : UIIndexBarVisualStyle_Base

{
    NSArray *_titles;
    UIFont *_font;
    long long _selectedSection;
    _Bool _pastTop;
    _Bool _pastBottom;
    struct CGSize _cachedSize;
    struct CGSize _cachedSizeToFit;
    double _topPadding;
    double _bottomPadding;
    double _verticalTextHeightEstimate;
    UIColor *_nonTrackingBackgroundColor;
}

@property (copy, nonatomic) UIColor *nonTrackingBackgroundColor;

- (_Bool)overlay;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)font;
- (id)initWithView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)_visibleBoundsForRect:(struct CGRect)arg1 stride:(double *)arg2;
- (void)displayEntriesUpdated;
- (void)sizeUpdated;
- (double)minLineHeight;
- (id)displayEntryFromEntry:(id)arg1;
- (_Bool)updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (void)indexColorUpdated;
- (long long)_accessibility_indexForEntryAtPoint:(struct CGPoint)arg1;

@end
