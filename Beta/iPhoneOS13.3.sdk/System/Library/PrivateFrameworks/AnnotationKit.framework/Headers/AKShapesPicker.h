/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKModernToolbarPicker.h>

@class NSArray;

@interface AKShapesPicker : AKModernToolbarPicker

{
    NSArray *_shapes;
    long long _style;
}

@property (copy, nonatomic) NSArray *shapes;
@property long long style;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_shapeButtonPressed:(id)arg1;
- (void)_updateCurrentAppearanceIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1 shapeTags:(id)arg2;

@end
