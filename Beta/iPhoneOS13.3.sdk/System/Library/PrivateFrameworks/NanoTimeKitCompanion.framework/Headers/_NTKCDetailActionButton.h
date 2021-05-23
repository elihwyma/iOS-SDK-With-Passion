/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIButton.h>

@class NSString;

@interface _NTKCDetailActionButton : UIButton

{
    _Bool _disabled;
    NSString *_disabledReason;
}

@property (nonatomic, readonly) _Bool disabled;
@property (nonatomic, readonly) NSString *disabledReason;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setTitle:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_updateColor;
- (void)setDisabled:(_Bool)arg1 forReason:(id)arg2;

@end
