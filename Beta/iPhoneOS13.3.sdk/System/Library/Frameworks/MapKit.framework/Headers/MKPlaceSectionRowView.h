/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceSectionRowView

{
    _Bool _selected;
    _Bool _highlighted;
}

@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateBackgroundColor:(_Bool)arg1;

@end
