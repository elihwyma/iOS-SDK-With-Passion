/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCExtendedGamepad.h>

@class NSString, _GCACHomeButton;

@interface _GCMFiExtendedGamepadControllerProfile : GCExtendedGamepad

{
    _GCACHomeButton *_acHome;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (id)initWithController:(id)arg1;
- (void)toggleSuspendResume;
- (id)menuButton;
- (void)determineControllerCapabilities:(id)arg1 initInfo:(struct GCExtendedGamepadInitWithControllerInitInfo *)arg2;

@end
