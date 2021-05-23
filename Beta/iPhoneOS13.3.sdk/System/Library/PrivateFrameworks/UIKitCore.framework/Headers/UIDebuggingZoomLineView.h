/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIDebuggingZoomLineView : UIView

{
    unsigned long long _direction;
    UILabel *_lineLabel;
    struct CGPoint _start;
    struct CGPoint _end;
    struct CGRect _rect;
}

@property (retain, nonatomic) UILabel *lineLabel;
@property (nonatomic) struct CGPoint start;
@property (nonatomic) struct CGPoint end;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) struct CGRect rect;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLabelFrame;

@end
