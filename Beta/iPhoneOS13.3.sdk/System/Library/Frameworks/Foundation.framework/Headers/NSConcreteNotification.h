/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSNotification.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteNotification : NSNotification

{
    NSString *name;
    id object;
    NSDictionary *userInfo;
    _Bool dyingObject;
}

+ (id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (void)dealloc;
- (id)name;
- (id)object;
- (id)userInfo;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)recycle;

@end
