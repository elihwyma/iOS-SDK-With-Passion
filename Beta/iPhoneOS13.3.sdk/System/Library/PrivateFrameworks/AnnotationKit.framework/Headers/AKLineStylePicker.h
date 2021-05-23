/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKModernToolbarPicker.h>

@interface AKLineStylePicker : AKModernToolbarPicker

{
    unsigned long long _lineType;
    long long _lineStyle;
}

@property (readonly) unsigned long long lineType;
@property (readonly) long long lineStyle;

- (long long)_shapeTagForType:(unsigned long long)arg1;
- (id)_buttonImagesForType:(unsigned long long)arg1;
- (void)_styleButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lineType:(unsigned long long)arg2 controller:(id)arg3;
- (void)revalidateItems:(id)arg1;

@end
