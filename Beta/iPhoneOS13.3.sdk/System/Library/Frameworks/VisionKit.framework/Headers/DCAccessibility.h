/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface DCAccessibility : NSObject

+ (id)sharedInstance;

- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;
- (_Bool)needsAccessibilityElements;
- (_Bool)shouldPerformLoggingForVoiceOver;
- (_Bool)shouldPerformLoggingForSwitchControl;

@end
