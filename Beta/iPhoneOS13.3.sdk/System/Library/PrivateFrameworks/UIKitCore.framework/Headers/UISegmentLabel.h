/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

__attribute__((visibility("hidden")))
@interface UISegmentLabel : UILabel

{
    UILabel *_associatedLabel;
}

@property (weak, nonatomic) UILabel *associatedLabel;

- (id)init;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_parentSegment;
- (id)_disabledFontColor;
- (id)_associatedScalingLabel;

@end
