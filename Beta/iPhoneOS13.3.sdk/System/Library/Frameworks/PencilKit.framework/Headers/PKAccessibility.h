/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKAccessibility : NSObject

+ (id)sharedInstance;

- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;
- (_Bool)needsAccessibilityElements;

@end
