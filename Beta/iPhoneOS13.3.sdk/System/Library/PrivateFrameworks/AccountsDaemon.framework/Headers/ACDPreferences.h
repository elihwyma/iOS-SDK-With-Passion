/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@interface ACDPreferences : NSObject

+ (id)sharedPreferences;

- (void)synchronize;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)reset;
- (double)serverTimeoutInterval;

@end
