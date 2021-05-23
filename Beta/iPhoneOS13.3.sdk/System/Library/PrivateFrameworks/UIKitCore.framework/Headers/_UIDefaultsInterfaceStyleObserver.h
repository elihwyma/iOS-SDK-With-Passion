/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDefaultsInterfaceStyleObserver : NSObject

{
    NSString *_notificationName;
    int _notifyToken;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didChange;
- (id)initWithNotificationName:(id)arg1 darwinNotification:(const char *)arg2;
- (void)observeUserDefaults:(id)arg1 key:(id)arg2;

@end
