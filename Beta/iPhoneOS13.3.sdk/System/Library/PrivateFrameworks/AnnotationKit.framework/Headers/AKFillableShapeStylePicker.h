/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKModernToolbarPicker.h>

@class NSArray;

@interface AKFillableShapeStylePicker : AKModernToolbarPicker

{
    NSArray *_buttons;
    _Bool _showFill;
}

@property (nonatomic) _Bool showFill;

- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;
- (void)_styleButtonPressed:(id)arg1;
- (void)revalidateItems:(id)arg1;
- (void)_updateImagesForAnnotationType:(id)arg1;

@end
