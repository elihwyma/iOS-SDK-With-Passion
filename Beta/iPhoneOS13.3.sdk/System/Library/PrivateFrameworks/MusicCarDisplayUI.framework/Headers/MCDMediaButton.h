/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <MusicCarDisplayUI/MCDButton.h>

@interface MCDMediaButton : MCDButton

{
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canShowHighlight;
- (double)focusLayerCornerRadius;
- (id)colorForKnobFocusLayer;

@end
