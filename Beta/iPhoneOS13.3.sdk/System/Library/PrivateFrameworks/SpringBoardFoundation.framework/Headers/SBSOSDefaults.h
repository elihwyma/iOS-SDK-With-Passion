/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) _Bool disablesForAccessibility;
@property (nonatomic) _Bool performedCheckForTripleClickSOSMigrationAlert;

- (void)_bindAndRegisterDefaults;
- (_Bool)isAutomaticCallCountdownEnabled;
- (long long)lockButtonSOSTriggerCount;
- (_Bool)clawCanTriggerSOS;

@end
