/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLCamera.h>

@interface MDLStereoscopicCamera : MDLCamera

{
    float _interPupillaryDistance;
    float _leftVergence;
    float _rightVergence;
    float _overlap;
}

@property (nonatomic) float interPupillaryDistance;
@property (nonatomic) float leftVergence;
@property (nonatomic) float rightVergence;
@property (nonatomic) float overlap;
@property (nonatomic, readonly) CDStruct_14d5dc5e leftViewMatrix;
@property (nonatomic, readonly) CDStruct_14d5dc5e rightViewMatrix;
@property (nonatomic, readonly) CDStruct_14d5dc5e leftProjectionMatrix;
@property (nonatomic, readonly) CDStruct_14d5dc5e rightProjectionMatrix;

- (id)init;

@end
