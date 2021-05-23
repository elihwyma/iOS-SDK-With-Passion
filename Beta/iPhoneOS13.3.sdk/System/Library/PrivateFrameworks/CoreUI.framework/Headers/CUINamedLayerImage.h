/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedImage.h>

@interface CUINamedLayerImage : CUINamedImage

{
    struct CGRect _frame;
    double _opacity;
    int _blendMode;
    _Bool _fixedFrame;
}

@property (nonatomic) struct CGRect frame;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) _Bool fixedFrame;

- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end
