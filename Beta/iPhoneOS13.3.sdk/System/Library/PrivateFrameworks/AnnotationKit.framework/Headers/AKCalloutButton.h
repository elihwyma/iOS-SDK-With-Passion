/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIButton.h>

@class AKCalloutBar;

@interface AKCalloutButton : UIButton

{
    int _position;
    AKCalloutBar *_bar;
}

@property (nonatomic) int position;
@property (weak, nonatomic) AKCalloutBar *bar;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end
