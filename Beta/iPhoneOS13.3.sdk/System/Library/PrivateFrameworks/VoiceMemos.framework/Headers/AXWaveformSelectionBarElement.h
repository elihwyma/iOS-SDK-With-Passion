/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <UIKit/UIAccessibilityElement.h>

@interface AXWaveformSelectionBarElement : UIAccessibilityElement

{
    _Bool _adjustsStartTime;
}

@property (nonatomic) _Bool adjustsStartTime;

- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)isWaveformOverview;
- (void)_accessibilityIncreaseValue:(_Bool)arg1 isThreeFingerScroll:(_Bool)arg2;

@end
