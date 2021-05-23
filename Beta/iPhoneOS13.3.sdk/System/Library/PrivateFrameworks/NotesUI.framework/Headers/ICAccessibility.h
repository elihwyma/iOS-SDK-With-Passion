/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICAccessibility : NSObject

+ (id)sharedInstance;

- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;
- (_Bool)needsAccessibilityElements;
- (_Bool)shouldPerformLoggingForVoiceOver;
- (_Bool)shouldPerformLoggingForSwitchControl;

@end
