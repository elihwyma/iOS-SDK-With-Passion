/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellBackgroundView : UIView

{
    _Bool _selected;
    _Bool _drawsOpaque;
    _Bool _drawsBorder;
    _Bool _usesDarkTheme;
    unsigned long long _roundedCorners;
}

@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) _Bool drawsOpaque;
@property (nonatomic) _Bool drawsBorder;
@property (nonatomic) _Bool usesDarkTheme;
@property (nonatomic) unsigned long long roundedCorners;

- (void)drawRect:(struct CGRect)arg1;

@end
