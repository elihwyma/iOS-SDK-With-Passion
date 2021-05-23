/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIButton.h>

@protocol MKPlaceAttributionCellButtonDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionCellButton : UIButton

{
    _Bool _highlighted;
    id <MKPlaceAttributionCellButtonDelegate> _buttonDelegate;
}

@property (weak, nonatomic) id <MKPlaceAttributionCellButtonDelegate> buttonDelegate;

- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;

@end
