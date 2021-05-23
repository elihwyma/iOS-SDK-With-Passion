/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBCameraHardwareButtonDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) double shutterButtonLongPressTimeout;
@property (nonatomic, readonly) double shutterButtonLongPressCancellationTimeout;
@property (nonatomic, readonly) _Bool shutterButtonShouldUsePocketDetection;

- (void)_bindAndRegisterDefaults;

@end
