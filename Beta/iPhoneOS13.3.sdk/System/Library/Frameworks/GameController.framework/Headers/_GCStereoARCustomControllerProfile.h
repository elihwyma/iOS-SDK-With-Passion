/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCStereoAR.h>

@class NSString, _GCACHomeButton;

@interface _GCStereoARCustomControllerProfile : GCStereoAR

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
- (void)setAttitude:(struct)arg1;
- (void)toggleSuspendResume;
- (id)menuButton;
- (void)setAttitudeWithControllerUpdate:(struct)arg1;
- (void)setForwardQuaternion:(struct)arg1;
- (void)setControllerAttitude:(struct)arg1;

@end
