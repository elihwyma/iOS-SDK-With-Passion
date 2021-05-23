/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) _Bool limitFeaturesForRemoteLock;
@property (nonatomic, readonly) _Bool showLegalText;
@property (nonatomic) _Bool showAuthenticationEngineeringUI;
@property (nonatomic) _Bool showSupervisionText;
@property (nonatomic) _Bool showQuickNoteFingerGestureRecognizer;
@property (nonatomic) _Bool forceWakeToMaps;
@property (nonatomic) double nowPlayingTimeout;
@property (nonatomic) _Bool weDontNeedNoEducation;
@property (nonatomic) _Bool allowLocketGesture;

- (void)_bindAndRegisterDefaults;

@end
