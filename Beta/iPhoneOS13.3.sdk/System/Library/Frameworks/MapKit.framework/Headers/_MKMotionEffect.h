/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIMotionEffect.h>

@protocol _MKMotionEffectDelegate;

@interface _MKMotionEffect : UIMotionEffect

{
    struct UIOffset _offset;
    _Bool _enabled;
    id <_MKMotionEffectDelegate> _delegate;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (weak, nonatomic) id <_MKMotionEffectDelegate> delegate;

- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;
- (struct CATransform3D)transformWithTranslationScale:(struct UIOffset)arg1 rotationScale:(struct UIOffset)arg2;
- (struct UIOffset)offsetWithScale:(struct UIOffset)arg1;
- (struct UIOffset)rawOffset;

@end
