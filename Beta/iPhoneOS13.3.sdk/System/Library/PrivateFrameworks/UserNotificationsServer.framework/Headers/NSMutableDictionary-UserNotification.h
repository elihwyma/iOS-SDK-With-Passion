/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSMutableDictionary.h>

@interface NSMutableDictionary (UserNotification)

- (void)uns_safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)uns_safeSetNonEmptyArray:(id)arg1 forKey:(id)arg2;
- (void)uns_safeSetNonEmptyString:(id)arg1 forKey:(id)arg2;
- (void)uns_safeSetNonEmptySet:(id)arg1 forKey:(id)arg2;
- (void)uns_safeSetCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)uns_safeSetCMTime:(CDStruct_1b6d18a9)arg1 forKey:(id)arg2;
- (void)uns_setCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)uns_setCMTime:(CDStruct_1b6d18a9)arg1 forKey:(id)arg2;
- (void)uns_safeSetNonEmptyDictionary:(id)arg1 forKey:(id)arg2;

@end
