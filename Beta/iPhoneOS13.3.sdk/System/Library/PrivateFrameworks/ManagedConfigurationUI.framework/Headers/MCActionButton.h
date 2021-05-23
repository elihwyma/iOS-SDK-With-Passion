/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface MCActionButton : UIButton

{
    int _state;
    struct CGRect _area;
}

- (void)setState:(int)arg1;
- (void)_layout;
- (void)_cacheImages;
- (id)_titleForConfigState:(int)arg1;
- (void)_updateButtonImages:(int)arg1 animate:(_Bool)arg2;
- (id)initWithConfigState:(int)arg1;
- (void)setEnclosingArea:(struct CGRect)arg1;
- (void)_animationFinished:(id)arg1;

@end
