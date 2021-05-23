/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebNotificationPrivate;

@interface WebNotification : NSObject

{
    WebNotificationPrivate *_private;
}

- (id)init;
- (void)dealloc;
- (id)title;
- (id)dir;
- (id)tag;
- (id)origin;
- (id)body;
- (unsigned long long)notificationID;
- (id)iconURL;
- (id)lang;
- (void)dispatchShowEvent;
- (void)dispatchCloseEvent;
- (void)dispatchClickEvent;
- (void)dispatchErrorEvent;

@end
