/*
 Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface HAPreferences : NSObject

{
    NSUserDefaults *_globalDefaults;
    _Bool _sensitiveLoggingEnabled;
}

@property (readonly) _Bool sensitiveLoggingEnabled;

+ (id)sharedPreferences;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
