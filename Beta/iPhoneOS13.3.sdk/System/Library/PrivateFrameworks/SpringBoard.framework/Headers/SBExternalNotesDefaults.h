/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@interface SBExternalNotesDefaults : BSAbstractDefaultDomain

@property (nonatomic) _Bool quickNotesDisabled;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
