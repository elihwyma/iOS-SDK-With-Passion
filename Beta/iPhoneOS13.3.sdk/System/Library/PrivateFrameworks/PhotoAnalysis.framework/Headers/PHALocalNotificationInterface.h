/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@interface PHALocalNotificationInterface : NSObject

{
    _Bool _isNotificationRegistered;
}

@property _Bool isNotificationRegistered;

+ (id)localNotificationInterface;

- (id)init;
- (void)fireLocalNotificationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
