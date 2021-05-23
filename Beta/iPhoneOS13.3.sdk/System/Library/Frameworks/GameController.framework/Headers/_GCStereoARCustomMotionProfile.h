/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCMotion.h>

@interface _GCStereoARCustomMotionProfile : GCMotion

{
    CDStruct_0e8a9a91 _forwardQuaternion;
    struct GCQuaternion _prevControllerAttitude;
    _Bool _hasSetPrevControllerAttitude;
}

- (id)initWithController:(id)arg1;
- (void)_setForwardQuaternion:(struct)arg1;
- (_Bool)hasAttitudeAndRotationRate;
- (void)_setAttitudeWithControllerUpdate:(struct GCQuaternion)arg1;

@end
