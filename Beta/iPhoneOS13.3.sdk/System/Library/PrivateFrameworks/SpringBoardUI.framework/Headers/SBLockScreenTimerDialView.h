/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class NSString, SBUILegibilityView, _UILegibilitySettings;

@interface SBLockScreenTimerDialView : UIView

{
    double _strength;
    _UILegibilitySettings *_legibilitySettings;
    SBUILegibilityView *_dialView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_imageNameForCurrentContentSize:(id)arg1;
- (id)_newDialViewForSettings:(id)arg1;

@end
