/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UISegmentedControl;

@interface PKPaletteErasingAttributesView : UIView

{
    UISegmentedControl *_segmentedControl;
}

@property (nonatomic) long long eraserType;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_canShowWhileLocked;

@end
