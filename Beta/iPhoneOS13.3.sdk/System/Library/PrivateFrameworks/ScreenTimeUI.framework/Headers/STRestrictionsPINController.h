/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSRestrictionsPINController.h>

@protocol STRestrictionsPINControllerDelegate;

__attribute__((visibility("hidden")))
@interface STRestrictionsPINController : PSRestrictionsPINController

@property (weak, nonatomic) id <STRestrictionsPINControllerDelegate> pinDelegate;

- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)validatePIN:(id)arg1;
- (void)setPIN:(id)arg1;
- (id)pinInstructionsPrompt;

@end
