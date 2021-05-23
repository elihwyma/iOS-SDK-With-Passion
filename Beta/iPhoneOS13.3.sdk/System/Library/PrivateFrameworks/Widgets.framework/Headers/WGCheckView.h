/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UIView.h>

@interface WGCheckView : UIView

@property (nonatomic, getter=isChecked) _Bool checked;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_shapeLayer;
- (struct CGPath *)_newPathForBounds:(struct CGRect)arg1;
- (void)_invalidatePath;

@end
