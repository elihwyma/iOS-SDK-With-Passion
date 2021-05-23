/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIWindow.h>

__attribute__((visibility("hidden")))
@interface CKHandwritingWindow : UIWindow

{
    _Bool _eatOrientationEvents;
}

@property (nonatomic) _Bool eatOrientationEvents;

- (_Bool)_canAffectStatusBarAppearance;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(_Bool)arg1;

@end
