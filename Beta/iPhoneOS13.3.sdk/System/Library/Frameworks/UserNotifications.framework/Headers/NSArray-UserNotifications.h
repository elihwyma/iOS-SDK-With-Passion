/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSArray.h>

@interface NSArray (UserNotifications)

- (id)un_nonEmptyCopy;
- (id)un_safeArrayContainingClass:(Class)arg1;
- (id)un_filter:(CDUnknownBlockType)arg1;
- (id)un_map:(CDUnknownBlockType)arg1;
- (void)un_each:(CDUnknownBlockType)arg1;
- (id)un_safeArrayContainingClasses:(id)arg1;

@end
