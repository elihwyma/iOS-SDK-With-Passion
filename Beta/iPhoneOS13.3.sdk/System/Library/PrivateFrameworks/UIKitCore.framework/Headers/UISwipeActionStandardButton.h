/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UISwipeActionButton.h>

__attribute__((visibility("hidden")))
@interface UISwipeActionStandardButton : UISwipeActionButton

{
    double _buttonWidth;
    struct {
        unsigned int isInLayoutSubviews:1;
    } _flags;
    double _extensionLength;
}

@property (nonatomic) double extensionLength;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleLabel;
- (void)layoutSubviews;
- (double)buttonWidth;

@end
