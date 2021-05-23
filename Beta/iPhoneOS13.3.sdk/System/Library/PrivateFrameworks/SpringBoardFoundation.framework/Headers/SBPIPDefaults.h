/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBPIPDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) _Bool allowAutoPIP;

- (void)_bindAndRegisterDefaults;

@end
