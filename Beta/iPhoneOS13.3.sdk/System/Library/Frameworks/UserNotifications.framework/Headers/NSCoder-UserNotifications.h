/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (UserNotifications)

- (void)un_encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (struct CGRect)un_decodeCGRectForKey:(id)arg1;
- (void)un_encodeCMTime:(CDStruct_1b6d18a9)arg1 forKey:(id)arg2;
- (CDStruct_1b6d18a9)un_decodeCMTimeForKey:(id)arg1;

@end
